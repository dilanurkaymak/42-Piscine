#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);

int     main(void)
{
        char                    src[] = "42 Proje Oku Uwuuu!";
        char                    dest[10];  
        unsigned int    len;

        len = ft_strlcpy(dest, src, sizeof(dest));
        printf("src  : %s\n", src);
        printf("dest : %s\n", dest);
        printf("src length: %u\n", len);
        return (0);
}
