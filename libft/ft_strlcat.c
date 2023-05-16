/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:42:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:12:13 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dest_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (size + src_length);
	dest += dest_length;
	size -= dest_length;
	while (*src && --size)
		*(dest++) = *(src++);
	*dest = '\0';
	return (src_length + dest_length);
}
