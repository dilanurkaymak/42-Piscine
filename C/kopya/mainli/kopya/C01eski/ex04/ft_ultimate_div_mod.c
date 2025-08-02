/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:01:04 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/23 16:51:40 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a = *a / *b;
	int temp_b = *a % *b;

	*a = temp_a;
	*b = temp_b;
}

int main ()
{
	int a= 48;
	int b= 8;
	

	ft_ultimate_div_mod(*a, *b);
	printf("%d %d", a, b);
}
