#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if ('A' <= argv[1][i] && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			else if ('a' <= argv[1][i] && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
