/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstrs_capitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:49:56 by cdutel-l          #+#    #+#             */
/*   Updated: 2022/06/17 16:34:16 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
					argv[i][j] += 32;
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z' \
				&& (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' \
				|| argv[i][j + 1] == '\0'))
				argv[i][j] -= 32;
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
