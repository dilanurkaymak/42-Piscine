/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:10:36 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/20 12:33:16 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ten;
	int	one;	

	ten = 0;
	while (ten <= 98)
	{
		one = ten + 1;
		while (one <= 99)
		{
			ft_putchar((ten / 10) + '0');
			ft_putchar((ten % 10) + '0');
			ft_putchar(' ');
			ft_putchar((one / 10) + '0');
			ft_putchar((one % 10) + '0');
			if (!(ten == 98 && one == 99))
				write(1, ", ", 2);
			one++;
		}
		ten++;
	}
}		
