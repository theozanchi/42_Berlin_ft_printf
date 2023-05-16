/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:41:50 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 15:12:24 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*output;
	size_t	index;

	length = ft_strlen(s);
	output = malloc((length + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	index = 0;
	while (index < length)
	{
		output[index] = f(index, s[index]);
		index++;
	}
	output[index] = '\0';
	return (output);
}
