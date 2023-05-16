/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:19:24 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 17:22:04 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	length;

	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	while (--size && *src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (length);
}
