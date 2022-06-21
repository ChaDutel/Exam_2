/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:04:07 by charline          #+#    #+#             */
/*   Updated: 2022/06/16 18:18:29 by charline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        while (argv[2][j] && (argv[1][i] != argv[2][j]))
            j++;
        if (argv[1][i] == argv[2][j])
            count++;
        i++;
    }
    if (i == count)
        write(1, "1", 1);
    else
        write(1, "0", 1);
    return (0);
}