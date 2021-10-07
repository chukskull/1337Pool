/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcapitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:00:21 by snagat            #+#    #+#             */
/*   Updated: 2021/09/28 16:15:03 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	neword;

	i = 0;
	neword = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97)
			|| (str[i] > 122 && str[i] <= 127))
			neword = 1;
		else if (neword)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			neword = 0;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
