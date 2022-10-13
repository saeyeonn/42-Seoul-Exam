#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i++]);
	return (i);
}


void  ft_revstr(char *str, int len)
{
	int i = -1;
	char *rev;
	rev = (char *) malloc(sizeof(char) * (len + 1));
	int sp_point;

	while (len-- >= 0)
	{
		if (str[len] ==  ' ' || str[len] == '\t')
		{
			sp_point = len;
			while (str[len] && (str[len] != ' ' && str[len] != '\t'))
				rev[++i] = str[++len];
		}
		while (len >= sp_point)
			len--;
	}
	rev[len] = '\0';
	i = -1;
	while (rev[++i])
		write(1, &rev[i], 1);
}


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		ft_revstr(argv[1], len);
	}
	write(1, "\n", 1);
}
