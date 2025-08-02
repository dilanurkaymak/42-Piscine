/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:05:45 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/27 13:11:33 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new = 1;

    ft_strlowcase(str);
    while (str[i])
    {
        if (('a' <= str[i] && str[i] <= 'z') && new)
        {
            str[i] -= 32;
            new = 0;
        }
        else if (!('a' <= str[i] && str[i] <= 'z') && !('0' <= str[i] && str[i] <= '9'))
            new = 1;
        else
            new = 0;
        i++;
    }
    return (str);
}
