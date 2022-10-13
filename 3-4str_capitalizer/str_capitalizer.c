#include <unistd.h>

char ft_lowerlize(char *str)
{
	int i = -1;

	while (str[++i])
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	return (*str);
}

void ft_capitalize(char *str)
{
	int i = -1;
	while (str[++i])
	{
		if ('a' <= str[0] && str[0] <= 'z')
			str[0] -= 32;
		else if ((str[i - 1] == ' ' || str[i - 1] == '\t') 
			&& ('a' <= str[i] && str[i] <= 'z'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{	
		int	i = 0;
		
		while (argv[++i])
			ft_lowerlize(argv[i]);
	
		i = 0;

		while (argv[++i])
			ft_capitalize(argv[i]);
	}
	else	
		write(1, "\n", 1);
}
