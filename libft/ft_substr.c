/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:11:53 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:13:25 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	char	*output_ptr;

	if (start >= ft_strlen(s))
	{
		output = malloc(1 * sizeof(char));
		if (output == NULL)
			return (NULL);
		*output = '\0';
		return (output);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	output = malloc((len + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	output_ptr = output;
	s += start;
	while (*s && len--)
		*output_ptr++ = *s++;
	*output_ptr = '\0';
	return (output);
}
