/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:50:37 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 18:39:08 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_check(const char c)
{
	if (c == 's' || c == 'c' || c == 'u' || c == 'x'
	|| c == 'p' || c == 'd' || c == 'X' || c == 'i')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			result;

	result = 0;
	va_start(ap, str);
	while(*str)
	{
		if (*str == '%' && ft_check(*(str + 1)))
		{
			str++;
			if (*str == 's')
				result += ft_type_char(&str, va_arg(ap, char *));
			else if (*str == 'c')
				result += ft_type_c(&str, va_arg(ap, int));
			else if (*str == 'd' || *str == 'i')
				result += ft_type_int(&str, va_arg(ap, int));
			else if (*str == 'u')
				result += ft_type_u(&str, va_arg(ap, unsigned int));
			else if (*str == 'x' || *str == 'X')
				result += ft_type_hexa(&str, va_arg(ap, unsigned int));
			else if (*str == 'p')
				result += ft_type_pointer(&str, va_arg(ap, unsigned long int));
		}
		else
		{
			result += 1;
			write(1, str++, 1);
		}
	}
	return (result);
}

// int main (void)
// {
// 	int result;
// 	ft_printf("%d %d", 2147483647, (int)-2147483648);
// }
