/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 07:43:17 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/25 07:57:05 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;
	c = '0';
	while ( c <='9')
	{	
	       write (1, &c, 1);
	       c++;
	}

}


int main ()
{
	ft_print_numbers();
	write (1, "\n",1); 
}
