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
	int ffile, wwrite, size;

	ffile = 0;
	wwrite = ffile;
	size = wwrite;
	ffile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0700);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[size];)
		{
			size++;
		}
	}
	wwrite = write(ffile, text_content, size);
	if (wwrite == -1)
	{
		if (ffile == -1)
		{
			return (-1);
		}
	}
	close(ffile);
	/* fclose(ffile); */
	return (1);
}
