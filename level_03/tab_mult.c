/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:56:27 by cdutel-l          #+#    #+#             */
/*   Updated: 2022/06/18 15:22:18 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr(int nbr)
{
	char	c;

	if (nbr > 9)
		put_nbr(nbr / 10);
	nbr %= 10;
	c = nbr + 48;
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int		i;
	int		res;
	char	c;
	char	str;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 1;
	while (i <= 9)
	{
		res = i * ft_atoi(argv[1]);
		c = i + 48;
		write(1, &c, 1);
		write(1, " x ", 3);
		write(1, argv[1], 1);
		write(1, " = ", 3);
		put_nbr(res);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
