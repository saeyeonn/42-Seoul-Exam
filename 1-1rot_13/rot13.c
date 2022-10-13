#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while(argv[1][i])
		{
			if (('A' <= argv[1][i] && argv[1][i] <= 'M') 
				|| ('a' <= argv[1][i] && argv[1][i] <= 'm'))
				argv[1][i] += 13;
			else if (('N' <= argv[1][i] && argv[1][i] <= 'Z')
					|| ('n' <= argv[1][i] && argv[1][i] <= 'z'))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
