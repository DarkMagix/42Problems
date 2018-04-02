/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 13:01:16 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 22:37:08 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_s;
	unsigned int src_s;
	unsigned int i;

	i = 0;
	d_s = 0;
	src_s = 0;
	while (dest[d_s] != '\0')
		d_s++;
	while (src[src_s] != '\0')
		src_s++;
	if (size <= d_s)
		return (src_s + size);
	while ((dest[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (d_s + src_s);
}
