/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:05:52 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 18:53:48 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_s;
	unsigned int i;

	i = 0;
	src_s = 0;
	while (src[src_s] != '\0')
		src_s++;
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
	}
	if (size >= 1)
		dest[i] = '\0';
	return (src_s);
}
