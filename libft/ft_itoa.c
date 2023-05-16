/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:59:39 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/09 16:39:26 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_length(int n)
{
	size_t	length;

	if (n > 0)
		length = 0;
	else
		length = 1;
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*output;
	long	long_n;

	length = get_str_length(n);
	output = malloc((length + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	long_n = n;
	if (long_n < 0)
		long_n *= -1;
	output[length] = '\0';
	while (--length >= 0)
	{
		output[length] = long_n % 10 + '0';
		long_n /= 10;
	}
	if (n < 0)
		output[0] = '-';
	return (output);
}
