#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int i = 0;
	
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' && str[i + 1] != '-' && str[i + 1] != '+')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		return (0);
	int num = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			num = num * str_base + str[i] - '0';
		else if ('A' <= str[i] && str[i] <= 'Z')
			num = num * str_base + str[i] - 'A' + 10;
		else if ('a' <= str[i] && str[i] <= 'z')
			num = num * str_base + str[i] - 'a' + 10;
		i++;
	}
	return (sign * num);
}






int		main(void)
{
	printf("%d\n", ft_atoi_base("-011", 2));
	printf("%d\n", ft_atoi_base("16", 8));
	printf("%d\n", ft_atoi_base("-123", 10));
	printf("%d\n", ft_atoi_base("FF", 16));
}
