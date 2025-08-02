#include <stdio.h>

int ft_str_is_lowercase(char *str);


int main(void)
{
    char *str[] = {"hello", "HELLO", "abc123", ""};  // Dizi içinde stringler
    int i = 0;

    while (i < 4)  // 4 stringi kontrol et
    {
        if (ft_str_is_lowercase(str[i]))  // Eğer küçük harflerden oluşuyorsa
        {
            printf("%s\n", str[i]);  // Stringi yazdır
        }
        i++;  
    }

    return (0);
}
