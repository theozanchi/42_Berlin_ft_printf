/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:51:30 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 16:36:53 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (n--)
		*(dest_ptr++) = *(src_ptr++);
	return (dest);
}
