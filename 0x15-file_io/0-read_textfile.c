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
	FILE *ffile;
	size_t *write, *read;

	ffile = fopen("filename", "w");
	if (filename == NULL || ffile == NULL)
	{
		return (0);
	} /** else *//* { *//*fputs(letters, ffile);*/
	read = malloc(sizeof(char) * letters);
	if (read > 0)
	{
		write = fputs(letters);
	}
	if (read != write)
	{
		return (0);
	}
	return (letters);
}
