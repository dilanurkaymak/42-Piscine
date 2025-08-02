a /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:08:02 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/21 21:11:37 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int x = 20;
	int y = 6;

	ft_ultimate_div_mod(&x, &y);

	printf("bölüm: %d\n", x);
	printf("kalan: %d\n", y);
}
