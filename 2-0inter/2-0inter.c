#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	i,j = 0;

		if (ft_strlen(argv[1]) <= ft_strlen(argv[2]))
		{
			while(argv[1][i])
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					j++;
				}
				i++;
			}
		}
		else
		{
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[2][j], 1);
					i++;
				}
				j++;
			}
		}
	}
	write(1, "\n", 1);
}
