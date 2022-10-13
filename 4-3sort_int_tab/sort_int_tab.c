#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int s = size;

	while (s-- >  0)
	{
		unsigned int i = 1;
		int temp = 0;

		while (tab[i] && i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = temp;
			}
			i++;
		}
	}
}

int main()
{
	int	tab[] = {5, 2, 4, 2};
	sort_int_tab(tab, 4);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);

	return (0);
}
