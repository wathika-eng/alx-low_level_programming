#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * read_textfile - start
  * @filename: name of the file
  * @letters: chars to be printed
  * Return: int of letters else 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file; /*pointer */
	size_t wwrite, rread, ffile, comp;

	comp = -1;
	ffile = open(filename, O_RDONLY);
	if (filename == NULL || ffile == comp)
	{
		return (0);
	} /** else *//* { *//*fputs(letters, ffile);*/
	file = malloc(sizeof(char) * letters);
	rread = read(ffile, file, letters);
	wwrite = write(STDOUT_FILENO, file, rread);
	if (rread != wwrite)
	{
		return (0);
	}
	free(file); /* freeing malloc */
	close(ffile);
	return (letters);
}
