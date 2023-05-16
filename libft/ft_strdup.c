/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:14:29 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:11:37 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	char	*dup_ptr;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	dup_ptr = dup;
	while (*str)
	{
		*dup_ptr = *str;
		str++;
		dup_ptr++;
	}
	*dup_ptr = '\0';
	return (dup);
}
