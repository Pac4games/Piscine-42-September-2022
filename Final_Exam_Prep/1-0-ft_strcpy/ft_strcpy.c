char	*ft_strcpy(char *s1, char *s2)
{
	int	p;

	p = 0;
	while (s2[p] != '\0')
	{
		s1[p] = s2[p];
		p++;
	}
	return (s1);
}
