#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
		p++;
	return (p);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		p;

	p = 0;
	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*str_copy;

	str = "Test string.";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "eeeeeeee vida de gado";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	return (0);
}
