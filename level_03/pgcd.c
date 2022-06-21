/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:46:22 by charline          #+#    #+#             */
/*   Updated: 2022/06/16 20:03:00 by charline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int res;
    int nb1;
    int nb2;

    i = 1;
    res = 1;
    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[2]);
    if (nb1 > nb2)
    {
        while (i <= nb2)
        {
            j = nb1 / i;
            k = nb2 / i;
            if ((j % 2 == 0) && (k % 2 == 0))
                res = i;
            i++;
        //res = i;
        }
    }
 /*    else
    {
        while (i != nb1)
        {
            j = nb1 / i;
            k = nb2 / i;
            if ((j % 2 == 0) && (k % 2 == 0))
                res = i;
            i++;
        }
    } */
    printf("%d", res);
  /*   while (nb1 != nb2)
    {
        nb1 /= i;
        nb2 /= i;
        i++;
        res = i;
    }
    printf("%d\n", res); */
    return (0);
}