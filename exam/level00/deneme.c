/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:44:23 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/25 11:51:21 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int 	k;
	j = 1;
	i = 0;
	k = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
	while (argv[j][i])
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i++], 1);
		}
		j++;
	}
	}
	return (0);
}
