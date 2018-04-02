/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:56:19 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 22:38:19 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprintable(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
