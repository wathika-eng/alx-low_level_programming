#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *buff(char *filename);
void closes(int d);

/**
  * buff - start
  * @filename: name
  * Return: ptr
*/
char *buff(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		printf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}
/**
  * closes - start
  * @d: descriptor
  * Return: nothing
*/

void closes(int d)
{
	int a;
	
	a = fclose(d);
	if (a == -1)
	{
		printf("Error: Can't close %s\n", d);
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
	if (argc != 3)
	{
		exit(97);
	}
	return (0);
}
