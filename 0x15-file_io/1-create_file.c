#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * create_file - start
  * @filename: name
  * @text_content: string to write
  * Return: 1 success else -1
*/

int create_file(const char *filename, char *text_content)
{
	FILE *ffile;

	ffile = fopen("filename", "r");
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		ffile = fopen("filename", "w+");
		fputs(text_content, ffile);
	}
	/* fclose(ffile); */
	return (1);
	/* free(ffile); */
}
