/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:52:28 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/19 17:04:34 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define DEC_BASE "0123456789"
# define HEX_BASE_LOW "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"
# define POINTER_PREFIX "0x"
# define NULL_DISPLAY "(null)"
# define NIL_DISPLAY "(nil)"

int		ft_printf(const char *s, ...);
size_t	putchar_count(int c);
size_t	putstr_count(char *s);
size_t	putnbr_base_count(int nbr, char *base);
size_t	putunbr_base_count(unsigned int nbr, char *base);
size_t	putptr_base_count(void *ptr, char *base, int first_loop_flag);

#endif
