/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:05:46 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/21 19:58:58 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a = 0;
	int b = 5;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);


	printf("bolum: %d mod: %d", div, mod);	
}
