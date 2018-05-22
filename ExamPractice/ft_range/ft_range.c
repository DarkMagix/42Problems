/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:21:44 by mweir             #+#    #+#             */
/*   Updated: 2018/05/21 19:29:21 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int size;
	int *res;
	int i;

	i = 0;
	size = (start > end) ? (start -  end) : (end - start);
	res = malloc(sizeof(int) * (size + 1));
	while (i < size + 1)
	{
		res[i] = (start >= end) ? (start - i) : (start + i);
		printf("%d\n", res[i]);
		i++;
	}
	return (res);
}
