/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:05:40 by charline          #+#    #+#             */
/*   Updated: 2022/06/21 00:11:58 by charline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(int nb1, int nb2)
{
    return (nb1 <= nb2);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list    *head;
    t_list    *tmp;
    t_list    *follow;

    head = lst;
    if (!lst)
        return (NULL);
    while(lst->next)
    {
        follow = lst->next;
        while (follow)
        {
            if ((*cmp)(*(lst->content), *(follow->content)) == 0)
            {
                tmp->content = lst->content;
                lst->content = follow->content;
                follow->content = tmp->content;
            }
            follow = follow->next;
        }
        lst = lst->next;
    }
    return (head);
}

t_list  *create_elems(int data)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = &data;
    return(new);
}

int main()
{
    t_list  *list;
    t_list  *head;
    
    head = create_elems(3);
    
    list = head;
    list = list->next;
    list->next = create_elems(1);
    list = list->next;
    list->next = create_elems(7);
    list = list->next;
    list->next = create_elems(2);
    
    sort_list(list, ft_strcmp);
    return (0);
}