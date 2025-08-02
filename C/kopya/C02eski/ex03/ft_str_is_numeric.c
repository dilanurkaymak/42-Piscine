/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:17:37 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/26 20:34:49 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		if(!('0' <= str[i] && str[i] <= '9'))
		
			return 0;
		i++;
	}
	return 1;
}
