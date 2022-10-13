#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] == s2[i])
		i++;
	int cmp = s1[i] - s2[i];
	
	if (cmp == 14)
		return (0);
	return (cmp);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
}
