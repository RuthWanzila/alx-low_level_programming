#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59;
ssize_t written = 0;
while (written < len)
{
written += write(STDERR_FILENO, str + written, len - written);
}
return (1);
}
