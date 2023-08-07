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
int x;
ssize_t bytes_read, bytes_written;
char *buff;

if (filename == NULL)
return (0);

x = open(filename, O_RDONLY);
if (x == -1)
return (0);

buff = malloc(sizeof(char) * (letters + 1));
if (buff == NULL)
{
close(x);
return (0);
}

bytes_read = read(x, buff, letters);
if (bytes_read == -1)
{
free(buff);
close(x);
return (0);
}

buff[bytes_read] = '\0';

bytes_written = write(STDOUT_FILENO, buff, bytes_read);
if (bytes_written == -1 || (size_t)bytes_written != bytes_read)
{
free(buff);
close(x);
return (0);
}

free(buff);
close(x);

return (bytes_written);
}
