/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:38:40 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/28 19:43:24 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	check_sign(char *str, int i, int *minus_count)
{
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			(*minus_count)++;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	minus_count;
	int	res;

	i = 0;
	sign = 1;
	minus_count = 0;
	res = 0;
	i = skip_whitespace(str, i);
	i = check_sign(str, i, &minus_count);
	if (minus_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
