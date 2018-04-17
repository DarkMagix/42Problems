/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:44:42 by mweir             #+#    #+#             */
/*   Updated: 2018/04/17 14:47:40 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list    *current;
    t_list    *next;
    t_list    *prev;

    current = *begin_list;
    prev = *begin_list;
    while (current)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            next = current->next;
            free(current);
            prev->next = next;
            current = next;
        }
        else
            current = current->next;
    }
}
