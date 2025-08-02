/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:55:46 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/26 20:34:56 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_numeric(char *str);

int main ()
{
	char src[] = "de";
	printf("%s\n", src);
	printf("%d\n", ft_str_is_numeric("123"));
    	printf("%d\n", ft_str_is_numeric("abc"));
	printf("%d\n", ft_str_is_numeric("")); 
	return (0);
}
