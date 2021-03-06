#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 *create_file - that creates a file.
 *@filename: name of file.
 *@text_content: content file.
 *Return: 0
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t wr = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
wr = write(fd, text_content, _strlen(text_content));
close(fd);
if (wr == -1)
return (-1);
return (1);
}
