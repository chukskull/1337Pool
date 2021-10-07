/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:03:45 by snagat            #+#    #+#             */
/*   Updated: 2021/09/30 18:57:08 by snagat           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	roberto;

	i = 0;
	roberto = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[roberto + i] = src[i];
		i++;
	}
	dest[roberto + i] = '\0';
	return (dest);
}
