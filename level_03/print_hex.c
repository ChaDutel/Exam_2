/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:11:13 by cdutel-l          #+#    #+#             */
/*   Updated: 2022/06/18 15:46:28 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr_hex(int nbr)
{
	char	c;

	if (nbr >= 16)
	{
		put_nbr_hex(nbr / 16);
		put_nbr_hex(nbr % 16);
	}
	if (nbr < 10)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else if (nbr < 16)
	{
		c = nbr + 87;
		write(1, &c, 1);
	}
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
	int		count;
	int		nbr;
	char	n;

	i = 0;
	count = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			count++;
		i++;
	}
	if (i != count)
	{
		write(1, "\n", 1);
		return (0);
	}
	nbr = ft_atoi(argv[1]);
	put_nbr_hex(nbr);
	write(1, "\n", 1);
	return (0);
}
/* void	ft_putnbr_hex(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		
	}
	
}

int	main(int argc, char **argv)
{
	int		i;
	int		count;
	char	c;

	i = 0;
	count = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			count++;
		i++;
	}
	if (i != count)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		c = argv[1][i] ;
		write(1, &c, 1);
		i++;
	}
	
} */