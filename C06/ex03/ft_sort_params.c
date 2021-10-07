/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:40:26 by snagat            #+#    #+#             */
/*   Updated: 2021/10/06 10:49:51 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_parms(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j <= ac - 1)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	ft_sort_parms(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
