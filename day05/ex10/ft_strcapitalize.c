/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:22:37 by mweir             #+#    #+#             */
/*   Updated: 2018/03/20 11:21:44 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_letter(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char *buf;

	buf = str;
	while (*buf != '\0')
	{
		if (ft_is_letter(*(buf - 1)) && *buf >= 'A' && *buf <= 'Z')
		{
			*buf += 32;
		}
		if (!ft_is_letter(*(buf - 1)) && *buf >= 'a' && *buf <= 'z')
		{
			*buf -= 32;
		}
		buf++;
	}
	return (str);
}
