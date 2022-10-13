#include <unistd.h>

void ft_rcapitalize(char *str)
{
	int	 i = -1;

	while (str[++i])
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;

	i = -1;

	while (str[++i])
	{
		if ('a' <= str[i]  && str[i] <= 'z' && (str[i + 1] == ' ' 
					|| str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;
	
	while (++i < argc)
	{
		ft_rcapitalize(argv[i]);
		write(1, "\n", 1);
	}
}
