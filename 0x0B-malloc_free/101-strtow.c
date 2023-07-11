#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
char **words_array;
int j, start_pos, end_pos, ptr_index; 
int num_words, i;
num_words = 0;
start_pos = 0;
end_pos;
ptr_index = 0;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (((i > 0) && (str[i - 1] != ' ')) || (str[i] != ' '))
{
num_words++;
}
}
words_array = (char **)malloc((num_words + 1) * sizeof(char *));
if (words_array == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (((i > 0) && (str[i - 1] == ' ')) || (start_pos == 0))
{
start_pos = i;
}
else if ((str[i + 1] == '\0') || (str[i + 1] == ' '))
{
end_pos = i + 1;
words_array[ptr_index] = (char *)malloc((end_pos - start_pos) + 1);
if (words_array[ptr_index] == NULL)
{
for (j = 0; j < ptr_index; j++)
{
free(words_array[j]);
}
free(words_array);
return (NULL);
}
memcpy(words_array[ptr_index], &(str[start_pos]), ((end_pos - start_pos)));
words_array[ptr_index][(end_pos - start_pos)] = '\0';
ptr_index++;
}
}
words_array[num_words] = NULL;
return (words_array);
}
