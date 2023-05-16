/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:37:03 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/08 17:19:45 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr && (unsigned char)*ptr != (unsigned char)c)
		ptr++;
	if ((unsigned char)*ptr == (unsigned char)c)
		return (ptr);
	else
		return (NULL);
}
