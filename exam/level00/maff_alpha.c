/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 08:03:44 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/25 08:53:53 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	char c ='a';
	while (c <='z')
	{
		if ((c- 'a') % 2 ==0)
			write (1, &c, 1);
		else 
		{
			char b = c - 32;
                        write (1, &b, 1);

		}	
		c++;
	}
	write (1,"\n", 1);
}

int main ()
{
	maff_alpha();
}
