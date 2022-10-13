#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_putnbr(int num)
{
	if (num < 10)
		ft_putchar(num + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putchar("0123456789"[num % 10]);
	}
}

int ft_atoi(char *str)
{
	int	i = -1;
	int num = 0;

	while (str[++i])
	{
		str[i] -= '0';
		num = num * 10 + str[i];
	}
	return (num);
}

int main(int argc, char *argv[])
{
	char i = '0';

	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
	
		while (++i <= 9 + '0')
		{
			int result = (i - '0') * num;
			write(1, &i, 1);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(result);
			write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
}
