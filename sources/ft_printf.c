/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:35:26 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/16 16:54:56 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	display_data(char specifier, va_list ap)
{
	size_t	count;

	count = 0;
	if (specifier == 'c')
		count = putchar_count(va_arg(ap, int));
	else if (specifier == 's')
		count = putstr_count(va_arg(ap, char *));
//	else if (specifier == 'p')
//		ft_putptr_fd(va_arg(ap, void *), 1);
	else if (specifier == 'd' || specifier == 'i')
		count = putnbr_base_count(va_arg(ap, int), DEC_BASE);
	else if (specifier == 'u')
		count = putunbr_base_count(va_arg(ap, unsigned int), DEC_BASE);
	else if (specifier == 'x')
		count = putunbr_base_count(va_arg(ap, unsigned int), HEX_BASE_LOW);
	else if (specifier == 'X')
		count = putunbr_base_count(va_arg(ap, unsigned int), HEX_BASE_UP);
	else if (specifier == '%')
		count = putchar_count('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	size_t	printed_count;

	va_start(ap, s);
	printed_count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			printed_count += display_data(*++s, ap);
			s++;
		}
		else
		{
			ft_putchar_fd(*s++, 1);
			printed_count++;
		}
	}
	va_end(ap);
	return (printed_count);
}
