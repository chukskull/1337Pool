/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:29:04 by snagat            #+#    #+#             */
/*   Updated: 2021/09/24 17:59:07 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
		return ;
	}
	if ((unsigned int)nb < 10 && (unsigned int)nb >= 0)
	{
		ft_putchar((unsigned int)nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr((unsigned int)nb / 10);
		ft_putnbr((unsigned int)nb % 10);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr((unsigned int)nb * -1);
	}
}
