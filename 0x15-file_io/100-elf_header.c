#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
  * print_elf_header_info - contains a struct
  * @header: linker
  * Return: nothing
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
	int type_index;
	/* char *elf_type[900]; */

	/* elf_type = malloc(sizeof(elf_type)); */

	printf("Magic:   %02x %02x %02x %02x\n",
			header->e_ident[EI_MAG0],
			header->e_ident[EI_MAG1], header->e_ident[EI_MAG2],
			header->e_ident[EI_MAG3]);
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("Class:   ELF32\n");
	} else if (header->e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("Class:   ELF64\n");
	} else
	{
		fprintf(stderr, "Error: Invalid ELF class\n");
		exit(98);
	}
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("Data:    2's complement, little endian\n");
	} else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("Data:    2's complement, big endian\n");
	} else
	{
		fprintf(stderr, "Error: Invalid ELF data encoding\n");
		exit(98);
	}
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	void initialize_elf_type(char **elf_type) = {
		elf_type[ET_NONE] = "NONE (No file type)",
		elf_type[ET_EXEC] = "EXEC (Executable file)",
		elf_type[ET_DYN] = "DYN (Shared object file)",
		elf_type[ET_REL] = "REL (Relocatable file)",
	};
	type_index = header->e_type;
	if (type_index >= 0 && type_index <= 3)
		printf("Type:\t%s\n", elf_type[type_index]);
	else
		printf("Type:\tUnknown\n");
	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

/**
  * main - start
  * @argc: args count
  * @argv: args
  * Return: 0 success
*/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
