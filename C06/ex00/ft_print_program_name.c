/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:41:05 by snagat            #+#    #+#             */
/*   Updated: 2021/10/06 10:54:36 by snagat           ###   ########.fr       */
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

	i = 0;
	while (arv[0][i] != '\0' && arc)
	{
		ft_putchar(arv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
