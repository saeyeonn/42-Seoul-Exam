#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max = tab[0];

	while (len-- > 0)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int main()
{
	int nums1[] = {-2, -4, -778, -10};
	printf("%d\n", max(nums1, 4));
	int nums2[] = {-2, 102, 43};
	printf("%d\n", max(nums2, 3));
	int nums3[] = {-2, 234, 23, 400, -3000, 4349, 20};
	printf("%d\n", max(nums3, 7));
}
