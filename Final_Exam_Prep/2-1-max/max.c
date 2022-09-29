int	max(int *tab, unsigned int len)
{
	unsigned int	p;
	int				max_num;

	if (!tab)
		return (0);
	p = 0;
	max_num = tab[0];
	while (p <= len)
	{
		if (tab[p] > max_num)
			max_num = tab[p];
		p++;
	}
	return (max_num);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = -98;
	tab[1] = 69;
	tab[2] = 35;
	printf("%d", max(tab, 3));
	return (0);
}
