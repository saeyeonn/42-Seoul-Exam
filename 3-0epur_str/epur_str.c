#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i = -1;

		while (argv[1][++i])
		{
			if (argv[1][i] != '\t' && argv[1][i] != ' ')
				write(1, &argv[1][i], 1);
			else if ((argv[1][i] == '\t' || argv[1][i] == ' ')
				&& argv[1][i + 1] != '\t' && argv[1][i + 1] != '\0' 
				&& argv[1][i + 1] != ' ')
					write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}			
