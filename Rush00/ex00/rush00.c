/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturpcu <yturpcu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:15:34 by yturpcu           #+#    #+#             */
/*   Updated: 2025/04/13 22:15:36 by yturpcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_line(int width)
{
	int	i;

	if (width >= 1)
	{
		ft_putchar('o');
		i = 0;
		while (i < width - 2)
		{
			ft_putchar('-');
			i++;
		}
		if (width > 1)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	print_middle_lines(int width, int height)
{
	int	i;
	int	j;

	i = 0;
	while (i < height - 2)
	{
		if (width >= 1)
			ft_putchar('|');
		j = 0;
		while (j < width - 2)
		{
			ft_putchar(' ');
			j++;
		}
		if (width > 1)
			ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
}

void	print_bottom_line(int width, int height)
{
	int	i;

	if (height > 1 && width >= 1)
	{
		ft_putchar('o');
		i = 0;
		while (i < width - 2)
		{
			ft_putchar('-');
			i++;
		}
		if (width > 1)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_top_line(x);
		print_middle_lines(x, y);
		print_bottom_line(x, y);
	}
}
