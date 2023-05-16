/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:25:58 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 16:37:26 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	if (dest_byte < src_byte)
	{
		while (n--)
			*(dest_byte++) = *(src_byte++);
	}
	else
	{
		dest_byte += n - 1;
		src_byte += n - 1;
		while (n--)
			*(dest_byte--) = *(src_byte--);
	}
	return (dest);
}
