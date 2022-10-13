#include <unistd.h>

char *ft_strcpy(char *str1, char *str2, char *arr)
{
	int i, j = -1;

	while (str1[++i])
		arr[i] = str1[i];
	while (str2[++j])
		arr[++i] = str2[j];
	arr[j + 1] = '\0';

	return (arr);
}

void ft_union(char *argv1, char *argv2)
{
	char arr[1000];

	ft_strcpy(argv1, argv2, arr);
	int i,j = 0;
	while (arr[i])
	{
		while (j < i)
		{
			if (arr[i] == arr[j])
				break;
			j++;
		}
		if (j == i)
			write(1, &arr[i], 1);
		j = 0;
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
