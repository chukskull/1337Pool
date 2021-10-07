/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:46:06 by snagat            #+#    #+#             */
/*   Updated: 2021/10/04 19:43:45 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkdbl(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base [i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	checkvalid(char *base)
{
	int	sizebase;
	int	i;

	i = 0;
	sizebase = ft_strlen(base);
	if (base[0] == '\0' || sizebase == 1)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '\n' || base[i] == '\t'
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbrbase(int nbr, char *base)
{
	 unsigned int	ok;
	 unsigned int	b;

	ok = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		b = -nbr;
	}
	else
		b = nbr;
	if (b < ok && b >= 0)
	{
		write(1, &base[b], 1);
	}
	else if (b >= ok)
	{
		ft_putnbrbase(b / ok, base);
		ft_putnbrbase(b % ok, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_checkdbl(base) || !checkvalid(base))
	{
		return ;
	}
	ft_putnbrbase(nbr, base);
}
