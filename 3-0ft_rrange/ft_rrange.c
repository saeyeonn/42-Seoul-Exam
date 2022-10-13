#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *rrange;
	int i = 0;

	if (start > end)
		rrange = (int *) malloc(sizeof(int) * (start - end + 1));
	else
		rrange = (int *) malloc(sizeof(int) * (end - start + 1));
	if (rrange == NULL)
	{
		*rrange = 0;
		return (0);
	}
	while (start != end)
	{
		if (start > end)
			rrange[i++] = end++;
		else
			rrange[i++] = end--;
	}
	rrange[i] = end;
	return (rrange);
}

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}
