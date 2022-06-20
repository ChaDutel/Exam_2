/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:17:35 by cdutel-l          #+#    #+#             */
/*   Updated: 2022/06/19 14:27:51 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int		i;
	int		j;
	int		tmp;
	char	c;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	for (int i = 0; i < size; i++)
	{
		c = tab[i];
		write(1, &c, 1);
	}
}

int	main(void)
{
	int	tab[8] = {0, 2, 5, 7, 3, 4, 9, 2};

	sort_int_tab(tab, 5);
	return (0);
}
