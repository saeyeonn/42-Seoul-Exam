#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int num)
{
	if (num < 10)
		ft_putchar(num % 10 + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
}

int ft_atoi(char *str)
{
	int i = -1;
	int num = 0;

	while (str[++i])
	{
		str[i] -= '0';
		num = num * 10 + str[i];
	}
	return (num);
}

int is_prime(int num)
{	
	int n = 2;

	while (n <= num / n)
	{
		if (num % n == 0)
			return (0);
		n++;
	}
	return (num);
}
	
int prime_sum(int num)
{
	int n = 1;
	int sum = 0;

	while (++n <= num)
		sum += is_prime(n);
	return (sum);
}


int main(int argc, char *argv[])
{
	int num = ft_atoi(argv[1]);
	if (argc == 2 && num > 1)
	{
		int sum = prime_sum(num);
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}

