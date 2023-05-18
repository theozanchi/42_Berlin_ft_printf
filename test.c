/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:48:25 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/18 11:55:28 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		ft_printf_return_value;
	int		printf_return_value;
	char	*s1;
	char	*s2;

	printf("\033[1;31m");
	printf("\n\n%%C: CHARACTERS\n\n");
	printf("\033[0;1m");
	printf("Null char\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%c", NULL);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%c", NULL);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nChar in correct range\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%c", 120);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%c", 120);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nChar out of range\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%c", 2564);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%c", 2564);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%S: STRINGS\n\n");
	printf("\033[0;1m");
	printf("Null string\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%s", NULL);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%s", NULL);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nEmpty string\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	s1 = "";
	ft_printf_return_value = ft_printf("%s", s1);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%s", s1);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nNormal string\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	s2 = "This is a test string";
	ft_printf_return_value = ft_printf("%s", s2);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%s", s2);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%P: POINTERS\n\n");
	printf("\033[0;1m");
	printf("Null pointer\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%p", NULL);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%p", NULL);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nNormal pointer\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%p", s1);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%p", s1);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%D: DECIMALS\n\n");
	printf("\033[0;1m");
	printf("Zero\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%d", 0);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%d", 0);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MIN\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%d", -2147483648);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%d", -2147483648);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MAX\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%d", 2147483647);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%d", 2147483647);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%I: INTEGERS\n\n");
	printf("\033[0;1m");
	printf("Zero\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%i", 0);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%i", 0);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MIN\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%i", -2147483648);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%i", -2147483648);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MAX\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%i", 2147483647);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%i", 2147483647);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%U: UNSIGNED DECIMALS\n\n");
	printf("\033[0;1m");
	printf("Zero\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%u", 0);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%u", 0);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nUINT_MAX\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%u", 4294967295);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%u", 4294967295);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%x: LOW HEX\n\n");
	printf("\033[0;1m");
	printf("Zero\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%x", 0);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%x", 0);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MIN\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%x", -2147483648);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%x", -2147483648);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MAX\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%x", 2147483647);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%x", 2147483647);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\n%%X: UP HEX\n\n");
	printf("\033[0;1m");
	printf("Zero\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%X", 0);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%X", 0);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MIN\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%X", -2147483648);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%X", -2147483648);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nINT_MAX\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("%X", 2147483647);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("%X", 2147483647);
	printf("\nReturn value: %i", printf_return_value);

	printf("\033[1;31m");
	printf("\n\nCOMBINATIONS\n\n");
	printf("\033[0;1m");
	printf("Two different types\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("I test this %X and that %p", 0, NULL);
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("I test this %X and that %p", 0, NULL);
	printf("\nReturn value: %i", printf_return_value);
	printf("\033[0;1m");
	printf("\n\nNO ARGUMENT\n\n");
	printf("\033[0m");
	printf("FT_PRINTF\n");
	ft_printf_return_value = ft_printf("I test this %X and that %p");
	printf("\nReturn value: %i\n", ft_printf_return_value);
	printf("\nPRINTF\n");
	printf_return_value = printf("I test this %X and that %p");
	printf("\nReturn value: %i", printf_return_value);
}
