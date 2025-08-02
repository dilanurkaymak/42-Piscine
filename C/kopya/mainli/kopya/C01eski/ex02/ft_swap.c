/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:11:15 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/23 16:19:10 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{

	int temp = *a;

	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5;
	int y= 10;

	ft_swap(&x, &y);

	printf("%d %d", x, y);
}
