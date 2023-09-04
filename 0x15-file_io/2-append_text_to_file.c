#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int x, y, z;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
x = open(filename, O_APPEND | O_WRONLY);
if (x == -1)
return (-1);
for (z = 0; text_content[z] != '\0'; z++)
;
y = write(x, text_content, z);
if (y == -1)
return (-1);
close(x);
return (1);
}
