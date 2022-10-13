#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char	*str)
{
	int	num = 0;
	int i = -1;

	while (str[++i])
	{
		str[i] -= '0';
		num = num * 10 + str[i];
	}
	return (num);
}

void ft_hex(int	num)
{	
	if (num / 16 >= 16)
		ft_hex(num / 16);
	else
		ft_putchar("0123456789abcdef"[num / 16]);
	ft_putchar("0123456789abcdef"[num % 16]);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		ft_hex(num);
	}
	write(1, "\n", 1);
}
