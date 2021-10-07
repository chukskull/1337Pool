/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:28:23 by snagat            #+#    #+#             */
/*   Updated: 2021/09/29 15:56:56 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	roberto;

	i = 0;
	roberto = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[roberto + i] = src[i];
		i++;
	}
	dest[roberto + i] = '\0';
	return (dest);
}	
