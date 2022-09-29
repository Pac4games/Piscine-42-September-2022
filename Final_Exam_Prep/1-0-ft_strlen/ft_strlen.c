int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
		p++;
	return (p);
}
