#include <unistd.h>

void ft_putstr(char	*str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int main()
{
	char str[] = "Hello 123 //";
	ft_putstr(str);
}
