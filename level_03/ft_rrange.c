/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:22:59 by charline          #+#    #+#             */
/*   Updated: 2022/06/16 16:46:46 by charline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int size;
    int *tab;
    int i;

    i = 0;
    if (start < end)
    {
        size = (end - start) + 1;
        tab = malloc(sizeof(int) * size);
        if (!tab)
            return (NULL);
        while (end != start)
        {
            tab[i] = end;
            i++;
            end--;
        }
        tab[i] = start;
    }
    else
    {
        size = (start - end) + 1;
        tab = malloc(sizeof(int) * size);
        if (!tab)
            return (NULL);
        while (end != start)
        {
            tab[i] = end;
            i++;
            end++;
        }
        tab[i] = start;
    }
    return (tab);
}

int main()
{
    int *tab;
    int i;

    tab = ft_range(0, -3);
    i = 0;
    while (i < 16)
    {
        printf("%d", tab[i]);
        i++;
    }
    
    return (0);
}