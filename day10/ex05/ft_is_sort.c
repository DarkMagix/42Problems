/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:43:45 by mweir             #+#    #+#             */
/*   Updated: 2018/03/26 12:17:38 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
