/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:57:27 by snagat            #+#    #+#             */
/*   Updated: 2021/10/06 10:56:52 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int arc, char *arv[])
{
	int	i;
	int	k;

	k = 1;
	while (arv[k] != '\0' && arc)
	{
		i = 0;
		while (arv[k][i] != '\0')
		{
			ft_putchar(arv[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
}	
