#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char	*str)
{
	int len = 0;

	while (str[len])
		len++;

	int i = -1;
	char temp;

	while (++i < len / 2 )
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	return (str);
}

int main()
{
	char str[] = "abcdef";
	printf("%s", ft_strrev(str));
}
	
