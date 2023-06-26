#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int z = 0;
while (*(src + z) != '\0')
{
*(dest + z) = *(src + z);
z++;
}
*(dest + z) = '\0';
return (dest);
}
