#include "main.h"

/**
 * @read_textfile - reads a text file and
 * @prints it to the POSIX standard output.
 * @filename - string of characcters of files name.
 * @letters: number of letters it should read and print
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);

FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);

char buffer[letters + 1];
ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
if (bytesRead <= 0)
{
fclose(file);
return (0);
}
ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
if (bytesWritten != bytesRead)
{
fclose(file);
return (0);
}
fclose(file);
return (bytesRead);
}
