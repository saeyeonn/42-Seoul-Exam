#include <unistd.h>

int ft_strlen(char *str)
{
	int	i = 0;
	
	while (str[i++]);
	return (i);
}

void ft_lastword(char *argv)
{
	int i;
	int count = 0;
	i = ft_strlen(argv);

	while (i >= 0 && (argv[i] == '\t' || argv[i] == ' '))
		i--;
	while (i >= 0 && (argv[i] != '\t' && argv[i] != ' '))
	{
		i--;
		count++;
	}
	while (argv[++i] && count-- >= 0)
		write(1, &argv[i], 1);
	
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_lastword(argv[1]);
	write(1, "\n", 1);
}
