/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:17:37 by snagat            #+#    #+#             */
/*   Updated: 2021/10/04 17:19:01 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	escape(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r'
			|| str[i] == ' '))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	resultat;

	resultat = 0;
	n = 1;
	i = escape(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		resultat *= 10;
		resultat += str[i] - '0';
		i++;
	}
	return (resultat * n);
}
