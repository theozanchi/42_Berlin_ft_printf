/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:48:31 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:12:58 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		length;
	char	*ptr;

	length = ft_strlen(str);
	ptr = (char *)str + length;
	while (length && (unsigned char)*ptr != (unsigned char)c)
	{
		length--;
		ptr--;
	}
	if ((unsigned char)*ptr == (unsigned char)c)
		return (ptr);
	else
		return (NULL);
}
