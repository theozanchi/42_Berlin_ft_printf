/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_writers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:31:27 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/16 16:53:27 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	putchar_count(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	putstr_count(char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		write(1, s++, 1);
		count++;
	}
	return (count);
}

size_t	putnbr_base_count(int nbr, char *base)
{
	int		base_length;
	long	long_nbr;
	size_t	count;

	base_length = ft_strlen(base);
	long_nbr = nbr;
	count = 0;
	if (long_nbr < 0)
	{
		count += putchar_count('-');
		long_nbr *= -1;
	}
	if (long_nbr >= base_length)
		count += putnbr_base_count(long_nbr / base_length, base);
	count += putchar_count(base[long_nbr % base_length]);
	return (count);
}

size_t	putunbr_base_count(unsigned int nbr, char *base)
{
	int		base_length;
	size_t	count;

	base_length = ft_strlen(base);
	count = 0;
	if (nbr >= base_length)
		count += putnbr_base_count(nbr / base_length, base);
	count += putchar_count(base[nbr % base_length]);
	return (count);
}
