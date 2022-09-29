int	ft_strcmp(char *s1, char *s2)
{
	int p;

	p = 0;
	while (s1[p] && s2[p] && s1[p] == s2[p])
		p++;
	return (s1[p] - s2[p]);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("notsame", "nsame"));
	printf("%d\n", strcmp("same", "same"));
	printf("%d\n", strcmp("notsame", "nsame"));
	return (0);
}
