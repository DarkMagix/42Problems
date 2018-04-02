/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:24:34 by mweir             #+#    #+#             */
/*   Updated: 2018/03/22 16:33:11 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_w_l(char *str, int i)
{
	int size;

	size = 0;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
		{
			size++;
			i++;
		}
	}
	return (size);
}

int		ft_word_count(char *str)
{
	int len;
	int count;

	count = 0;
	len = 0;
	while (str[len])
	{
		if (str[len] == ' ' || str[len] == '\t' || str[len] == '\n')
		{
			count++;
		}
		len++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**temp;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	if ((temp = malloc(sizeof(char*) * (ft_word_count(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((temp[j] = malloc(sizeof(char) * ft_w_l(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				temp[j][k++] = str[i++];
			temp[j++][k] = '\0';
		}
	}
	temp[j] = NULL;
	return (temp);
}
