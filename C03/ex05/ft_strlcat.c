/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:17:44 by snagat            #+#    #+#             */
/*   Updated: 2021/10/02 09:37:59 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	tol;

	tol = 0;
	while (dest[tol] != '\0')
	{
		tol++;
	}
	return (tol);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tol;
	unsigned int	lengthsrc;

	i = 0;
	lengthsrc = ft_strlen(src);
	tol = ft_strlen(dest);
	if (size > 0)
	{
		while (src[i] != '\0' && i + tol < size - 1)
		{
			dest[tol + i] = src[i];
			i++;
		}
		dest[tol + i] = '\0';
	}
	if (size > tol)
	{
		return (tol + lengthsrc);
	}
	else
	{
		return (size + lengthsrc);
	}
}
