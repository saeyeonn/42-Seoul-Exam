#include <unistd.h>

int ft_doublecheck(char *arr, int i)
{
	int j = -1;
	while (++j < i)
		if (arr[i] == arr[j])
			return (-1);
	return (0);
}

void ft_print(char *arr)
{
	write(1, &arr[0], 1);
	int i = -1;
	
	while(arr[++i])
		if (ft_doublecheck(arr, i) == 0)
			write(1, &arr[i], 1);
}


int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int k = 0;
		char arr[3000] = {'\0'};
	
		while (argv[1][i])
			arr[k++] = argv[1][i++];
		i = 0;
		while (argv[2][i])
			arr[k++] = argv[1][i++];
		ft_print(arr);
	}
	write(1, "\n", 1);
}
