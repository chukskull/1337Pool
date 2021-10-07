/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:07:07 by snagat            #+#    #+#             */
/*   Updated: 2021/09/24 09:05:58 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb0(int x, int y)
{
	ft_putchar(48 + x / 10);
	ft_putchar(48 + x % 10);
	ft_putchar(' ');
	ft_putchar(48 + y / 10);
	ft_putchar(48 + y % 10);
	if (x != 98 || y != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_comb0(x, y);
			y++;
		}
		x++;
	}
}
