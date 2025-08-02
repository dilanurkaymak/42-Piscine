/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:05:03 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/26 16:10:20 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_alpha(char *str);

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "42Istanbul";
    char str3[] = "";

    if (ft_str_is_alpha(str1))
    {
        write(1, str1, ft_strlen(str1));
        write(1, "\n", 1);
    }

    if (ft_str_is_alpha(str2))
    {
        write(1, str2, ft_strlen(str2));
        write(1, "\n", 1);
    }

    if (ft_str_is_alpha(str3))
    {
        write(1, str3, ft_strlen(str3));
        write(1, "\n", 1);
    }

    return (0);
}
