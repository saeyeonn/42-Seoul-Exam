#include <stdio.h>

int atoi(const char *str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ') 
		i++;

	int sign;

	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

int main()
{
	printf("%d\n", atoi("  	---123"));
}
