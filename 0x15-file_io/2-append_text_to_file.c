#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *  create_file - start
  * @filename: file
  * @text_content: string
  * Return: 1 success else -1
*/
int create_file(const char *filename, char *text_content)
{
	FILE *filee;
	int ur = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ur])
		{
			ur++;
		}
	}
	filee = fopen(filename, "a+");
	if (filee == NULL)
		return (-1);
	fclose(filee);
	return (1);
}
