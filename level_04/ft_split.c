/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charline <charline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:54:03 by charline          #+#    #+#             */
/*   Updated: 2022/06/21 00:09:01 by charline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **ft_split(char *str)
{
    int i;
    int word;
    int size;
    char    **tab;

    i = 0;
    word = 0;
    while (str[i])
    {
        size = 0;
        while (str[i] || str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
        {
            size++;
            i++;
        }
        tab[word][i] = malloc size + 1;
        word++;
        i++;
    }
    
}