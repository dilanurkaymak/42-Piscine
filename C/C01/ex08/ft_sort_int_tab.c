/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:22:15 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/23 19:59:11 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab [j];
				tab [j] = tab [j + 1];
				tab [j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
