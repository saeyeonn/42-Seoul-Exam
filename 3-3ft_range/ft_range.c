#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *range;
	if (start > end)
		range = (int *) malloc(sizeof(int) * (start - end + 1));
	else
		range = (int *) malloc(sizeof(int) * (end - start + 1));
	
	if (range == NULL)
	{
		*range = 0;
		return (0);
	}
	int i = 0;
	while (start != end)
	{
		if (start > end)
			range[i++] = start--;
		else
			range[i++] = start++;
	}
	range[i] = end;
	return (range);
}


int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_range(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}
