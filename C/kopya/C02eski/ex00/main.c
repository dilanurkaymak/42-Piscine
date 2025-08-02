/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 02:13:37 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/24 05:33:15 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int	main ()
{
	char src[] = "Merhaba";
	char dest [10];

	ft_strcpy(dest, src);
	printf("%s\n",dest);

	return 0;
}
