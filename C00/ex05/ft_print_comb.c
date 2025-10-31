/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:43:12 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/20 11:48:20 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	hundred;
	int	ten;
	int	one;

	hundred = 0;
	while (hundred <= 7)
	{
		ten = hundred + 1;
		while (ten <= 8)
		{
			one = ten + 1;
			while (one <= 9)
			{
				ft_putchar(hundred + '0');
				ft_putchar(ten + '0');
				ft_putchar(one + '0');
				if (!(hundred == 7 && ten == 8 && one == 9))
					write(1, ", ", 2);
				one++;
			}
			ten++;
		}
		hundred++;
	}
}
