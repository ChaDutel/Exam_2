/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:22:59 by charline          #+#    #+#             */
/*   Updated: 2022/06/16 15:45:54 by charline         ###   ########.fr       */
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
        while (start != end)
        {
            tab[i] = start;
            i++;
            start++;
        }
        tab[i] = start;
    }
    else
    {
        size = (start - end) + 1;
        tab = malloc(sizeof(int) * size);
        if (!tab)
            return (NULL);
        while (start != end)
        {
            tab[i] = start;
            i++;
            start--;
        }
        tab[i] = start;
    }
    return (tab);
}
/*     int     i;
    int     j;
    int     size;
    int    *tab;

    if (start < end)
    {
        i = start;
        size = 0;
        while (i != end)
        {
            size++;
            i++;
        }
        tab = malloc(sizeof(int) * size);
        i = start;
        j = 0;
       while (i != end)
       {
            tab[j] = i;
            j++;
            i++;
      }
      tab[j] = i;
    }
    else
    {
        i = end;
        size = 0;
        while (i != start)
        {
            size++;
            i--;
        }
        tab = malloc(sizeof(int) * size);
        i = start;
        j = 0;
        while (i != end)
        {
            tab[j] = i;
            j++;
            i--;
        }
        tab[j] = i;
    }
    return(tab);
}*/

int main()
{
    int *tab;
    int i;

    tab = ft_range(2, -21);
    i = 0;
    while (i < 16)
    {
        printf("%d", tab[i]);
        i++;
    }
    
    return (0);
}