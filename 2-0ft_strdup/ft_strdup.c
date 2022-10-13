#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = -1;
	int count = 0;
	while (src[len])
		++len;
	char arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	while (src[++i])
		arr[i] = src[i];
	arr[len] = '\0';
	return (arr);
}
