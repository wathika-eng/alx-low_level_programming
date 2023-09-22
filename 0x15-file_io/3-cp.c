#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *buff(char *ffile);
void closes(int fd);

/**
  * buff - start
  * @ffile: name
  * Return: ptr
*/
char *buff(char *ffile)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ffile);
		exit(99);
	}
	return (buf);
}
/**
  * closes - start
  * @fd: descriptor
  * Return: nothing
*/

void closes(int fd)
{
	int a;
	
	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * main - start
  * @argc: arguments to pass
  * @argv: ptr
  * Return: 0
*/

int main(int argc, char *argv[])
{
	int w, x, y, z;
	char *pro;

	if (argc != 3)
	{
		exit(97);
	}
	pro = buff(argv[2]);
	w = open(argv[1], O_RDONLY);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file\n");
		return (98);
	}
	y = read(w, pro, 1024);
	x = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0064);
	if (x == -1)
	{    
		dprintf(STDERR_FILENO, "Error: Can't read from the file\n");
		return (98);
	}
	while ((y = read(w, pro, sizeof(pro))) > 0)
	{
		z = write(x, pro, y);
		if (z == -1)
		{
			dprintf(STDERR_FILENO, "Error, can't write t0 %s\n", argv[2]);
			close(w);
			close(x);
			return (99);
		}
		x = open(argv[2], O_WRONLY | O_APPEND);
	}
	closes(w);
	closes(x);
	free(pro);
	return (0);
}
