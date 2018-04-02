/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:38:16 by mweir             #+#    #+#             */
/*   Updated: 2018/03/23 14:27:57 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

char					**ft_split_whitespaces(char *str);
char					*ft_strdup(char *src);
typedef struct			s_stock_par
{
	char	*str;
	char	*copy;
	char	**tab;
	int		size_param;
}						t_stock_par;

#endif
