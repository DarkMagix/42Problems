/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 09:44:29 by mweir             #+#    #+#             */
/*   Updated: 2018/03/22 16:24:52 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_arg_len(int argc, char **argv)
{
	int i;
	int j;
	int size;

	size = 0;
	i = 1;
	if (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		total_size;

	total_size = ft_arg_len(argc, argv);
	i = 1;
	k = 0;
	str = (char*)malloc(sizeof(char) * (total_size) + 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
