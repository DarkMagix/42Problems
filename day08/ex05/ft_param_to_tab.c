/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:48:21 by mweir             #+#    #+#             */
/*   Updated: 2018/03/23 14:32:56 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*point;
	int			i;
	int			j;

	i = 0;
	j = 0;
	point = (t_stock_par*)malloc(sizeof(*point) * (ac + 1));
	if (!point)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		point[i].size_param = j;
		point[i].str = av[i];
		point[i].copy = ft_strdup(av[i]);
		point[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	point[i].str = 0;
	return (point);
}
