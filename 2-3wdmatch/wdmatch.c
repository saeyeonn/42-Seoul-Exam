#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	i = 0;
		int	j = -1;
		int flag = 0;
		while (argv[1][i])
		{
			while (argv[2][++j])
			{
				if (argv[1][i] == argv[2][j])
				{
					flag  = 1;
					break;
				}
			}
			i++;
		}
		if (flag == 1)
		{	
			i = 0;
			while (argv[1][i])
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
