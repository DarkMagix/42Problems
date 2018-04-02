/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:14:02 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 22:37:45 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, int nb);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (i < nb && src[i])
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (dest);
}
