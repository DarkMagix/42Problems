/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:03:46 by mweir             #+#    #+#             */
/*   Updated: 2018/03/19 22:46:12 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *end;

	while (*str != '\0')
	{
		start = str;
		end = to_find;
		while (*str != '\0' && *end != '\0' && *str == *end)
		{
			str++;
			end++;
		}
		if (!*end)
			return (start);
		str = start + 1;
	}
	return (0);
}
