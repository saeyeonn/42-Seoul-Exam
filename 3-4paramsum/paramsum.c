#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "0", 1);
	else	if (argc >= 1)
	{
		int i = 0;
		while (argv[1][i])
			i++;
		char num = argc - 1 + '0';
		write(1, &num, 1);
	}
	write(1, "\n", 1);
}
