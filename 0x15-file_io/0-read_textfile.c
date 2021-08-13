#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and  prints
 *                 it to the POSIX standard output.
 *@filename: name of file
 *@letters: number of letters
 * Return: wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nr, wr;
char *buf;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
return (0);
}
nr = read(fd, buf, letters);
if (nr == -1)
{
return (0);
}
close(fd);
wr = write(STDOUT_FILENO, buf, nr);
free(buf);
return (wr);
}
