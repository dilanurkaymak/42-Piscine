#include <stdio.h>

char    *ft_strlowcase(char *str);

int main ()
{
	char str1[] = "hello";

	printf("%s\n", str1);
	printf("%s\n", ft_strlowcase(str1));

	return (0);
}

