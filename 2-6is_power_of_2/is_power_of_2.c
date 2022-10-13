#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n < 2)
		return (0);
	while (n > 2 && n % 2 == 0)
	{	
		n /= 2;
		is_power_of_2(n / 2);
	}
	if (n % 2 == 1)
		return (0);
	else if (n % 2 == 0)
		return (1);
}

int main()
{
	printf("0 :%d\n", is_power_of_2(0));
	printf("0 :%d\n", is_power_of_2(200));
	printf("1 :%d\n", is_power_of_2(32));
	printf("1 :%d\n", is_power_of_2(256));
	printf("0 :%d\n", is_power_of_2(1000));
	printf("0 :%d\n", is_power_of_2(13));
	printf("1 :%d\n", is_power_of_2(1024));
}
