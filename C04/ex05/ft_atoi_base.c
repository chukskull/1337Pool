/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:36:55 by snagat            #+#    #+#             */
/*   Updated: 2021/10/04 16:32:18 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

int	checkvalid(char *base)
{
	int	sizebase;
	int	i;

	i = 0;
	sizebase = ft_strlen(base);
	if (base[0] == '\0' || sizebase == 1 )
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '\n' || base[i] == '\t'
			|| base[i] == ' ' || base[i] == '\f'
			|| base[i] == '\v' || base[i] == '\r'
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	is_inside(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	res;
	long int	i;
	long int	neg;

	i = 0;
	res = 0;
	neg = 1;
	if (!checkvalid(base) || !ft_checkdbl(base))
		return (0);
	while (str[i] == '\n' || str[i] == '\t'
		|| str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (is_inside(str[i], base) != -1)
	{
		res = (res * ft_strlen(base)) + (is_inside(str[i], base));
		i++;
	}
	return (res * neg);
}
/*int main(int ac, char **av)
{
  printf("%d", ft_atoi_base(av[1],av[2]));
  }
*/
