#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
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
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: content of file.
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t wr;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
wr = write(fd, text_content, _strlen(text_content));
close(fd);
if (wr == -1)
return (-1);
return (1);
}
