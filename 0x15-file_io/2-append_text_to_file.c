#include "main.h"

/**
 * append_text_to_file - start
 * @filename: ptr to name of file
 * @text_content: str to write to file
 * Return: 1 Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oopen, wwrite, size;

	oopen = 0;
	wwrite = oopen;
	size = wwrite;
	oopen = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for ( ; text_content[size];)
		{
			size++;
		}
	}
	else if (filename == NULL)
	{
		return (-1);
	}
	wwrite = write(oopen, text_content, size);
	if (wwrite == -1 || oopen == -1)
	{
		return (-1);
	} else
	{
		close(oopen);
		return (1);
	}
}
