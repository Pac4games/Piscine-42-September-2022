#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	hold;
	int		p;
	int 	i;
	int		t;

	p = 0;
	i = 0;
	while (str[i])
		i++;
	t = i;
	i--;
	while (p <= t / 2)
	{
		hold = str[p];
		str[p] = str[i];
		str[i] = hold;
		i--;
		p++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Hello, world!";
	printf("%s", ft_strrev(str));
	return (0);
}
