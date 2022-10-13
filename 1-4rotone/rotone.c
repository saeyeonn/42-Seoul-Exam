#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if (('A' <= argv[1][i] && argv[1][i] <= 'Y') 
				|| ('a' <= argv[1][i] && argv[1][i] <= 'y'))
				argv[1][i] += 1;
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				argv[1][i] -= 25;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

