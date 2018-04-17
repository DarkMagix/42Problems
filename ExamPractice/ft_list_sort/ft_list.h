/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:51:57 by mweir             #+#    #+#             */
/*   Updated: 2018/04/17 14:52:30 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct              s_list
{
    struct s_list   *next;
    void            *data;
}                           t_list;

t_list                      *ft_create_elem(void *data);

#endif
