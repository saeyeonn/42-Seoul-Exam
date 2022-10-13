#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = -1;

	if (argc == 2)
	{
		while (argv[1][++i])
		{
			int count = 0;
			if ('a' <= argv[1][i] && argv[1][i] <= 'z')
				count = argv[1][i] - 'a';
			else if ('A' <= argv[1][i] && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A';
			while (count-- >= 0)
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
