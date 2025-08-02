/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:56:12 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/23 16:33:59 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b!=0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

int main ()
{
	int a = 12;
	int b = 4;
	int div;
	int mod;
	ft_div_mod(a, b, &div ,&mod);

	printf("%d %d",div, mod);
}
