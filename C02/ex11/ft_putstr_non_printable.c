/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:44:32 by snagat            #+#    #+#             */
/*   Updated: 2021/09/28 16:20:02 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char ch)
{
	char	 *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[(unsigned int)ch / 16]);
	ft_putchar(hex[(unsigned int)ch % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	ch;

	i = 0;
	while (str[i] != '\0')
	{
		ch = str[i];
		if ((ch < 32) || (ch > 127))
		{
			ft_putchar(92);
			ft_hex(ch);
		}
		else
		{
			ft_putchar(ch);
		}
		i++;
	}
}
