#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char str[] = "abdfsdf";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
