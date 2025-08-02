/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 07:23:39 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/25 07:42:54 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_countdown();
	write(1, "\n", 1);
	return (0);
}

