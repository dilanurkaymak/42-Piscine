#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Merhaba";
    char dest[10];

    ft_strncpy(dest, src, 5);
    write(1, dest, 5); // sadece ilk 5 karakteri yazdır
    write(1, "\n", 1); // yeni satır

    ft_strncpy(dest, src, 8); // bu sefer 8 karakter (7 harf + \0)
    write(1, dest, 8); // dikkat: '\0' görünmez ama yazdırılır
    write(1, "\n", 1);

    return (0);
}

