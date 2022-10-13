#include <unistd.h>

void ft_doublecheck(char *arr)
{
	int i = 0;

	write(1, &arr[0], 1);

	while (arr[++i])
	{
		int j = -1;
		while (++j < i)
			if (arr[j] == arr[i])
				break;
		if (j == i)
			write(1, &arr[i], 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char arr[5000];
		int i = 0;
		int index = 0;

		while (++i <  argc)
		{
			int j = -1;
			while (argv[i][++j])
				arr[index++] = argv[i][j]; 
		}
		arr[++index] = '\0';
		ft_doublecheck(arr);
	}
	write(1, "\n", 1);
}
