#include <stdio.h>

int ft_str_is_printable(char *str);


int main(void)
{
    char *str[] = {"hello", "HELLO", "abc123", "", "\n"};
    int i = 0;

    while (i < 5)
    {
        if (ft_str_is_printable(str[i]))
        {
            printf("%s\n", str[i]); 
        }
        i++;  
    }

    return (0);
}
