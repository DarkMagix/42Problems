/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:23:54 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 11:31:08 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalphabet(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (ft_isalphabet(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
