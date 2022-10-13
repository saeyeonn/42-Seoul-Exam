#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i = 2;

	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (n);
}

int next_prime(int n)
{
	while (is_prime(++n) == 0);

	return (n);
}

void ft_factorization(int num)
{
	int i = 2;

	if (is_prime(num) == 0)
	{
		while (is_prime(num) == 0)
		{
			while (num % i == 0)
			{
				printf("%d", i);
				if (is_prime(num) == 0)
					printf("*");
				num /= i;
			}
			i = next_prime(i);
		}
		if (num != 1)
			printf("%d", num);
	}
	else
		printf("%d", num);
}
	

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		ft_factorization(num);
	}
	printf("\n");
}
