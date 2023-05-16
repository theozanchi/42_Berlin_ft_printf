/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:05:04 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:12:49 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	char	*big_ptr;

	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	big_ptr = (char *)big;
	while (*big_ptr && len >= little_len)
	{
		if (ft_strncmp(big_ptr, little, little_len) == 0)
			return (big_ptr);
		big_ptr++;
		len--;
	}
	return (NULL);
}
