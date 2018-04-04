/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:49:05 by mweir             #+#    #+#             */
/*   Updated: 2018/03/28 21:29:14 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct				s_list
{
	struct s_list	*next;
	void			*data;
}							t_list;

t_list						*ft_create_elem(void *data);

#endif
