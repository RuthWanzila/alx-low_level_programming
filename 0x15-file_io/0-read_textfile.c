#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: string of characcters of files name.
 * @letters: number of letters it should read and print
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t x, y;
char *buff;
if (filename == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
free(buff);
return (0);
}
x = read(fd, buff, letters);
if (x == -1)
return (0);
y = write(STDOUT_FILENO, buff, x);
if (y == -1 || x != y)
return (0);
free(buff);
close(fd);
return (y);
}
