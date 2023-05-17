/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:48:25 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/17 16:52:25 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		ft_printf_return_value;
	int		printf_return_value;

	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%p", NULL);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%p", NULL);
	printf("\nReturn value: %i", printf_return_value);
}
