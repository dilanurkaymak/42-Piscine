unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size == 0)
		return (src_length);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
