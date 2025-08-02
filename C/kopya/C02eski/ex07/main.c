#include <stdio.h>

char    *ft_strupcase(char *str);

int main ()
{
	char str1[] = "hello";

	printf("%s\n", str1);
	printf("%s\n", ft_strupcase(str1));

	return (0);
}

