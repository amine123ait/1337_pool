unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	if (size == 0)
	{
		return (len_src);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
