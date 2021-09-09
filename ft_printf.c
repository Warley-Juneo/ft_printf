/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:50:37 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/09 15:10:46 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

static int	ft_check(const char c)
{
	if (c == 's' || c == 'c' || c == 'u' || c == 'x' \
	|| c == 'p' || c == 'd' || c == 'X' || c == 'i' || c == '%')
		return (1);
	return (0);
}

static int	type(const char **str, va_list ap)
{
	int	result;

	result = 0;
	if (**str == 's')
		result += ft_type_char(str, va_arg(ap, char *));
	else if (**str == 'c')
		result += ft_type_c(str, va_arg(ap, int));
	else if (**str == 'd' || **str == 'i')
		result += ft_type_int(str, va_arg(ap, int));
	else if (**str == 'u')
		result += ft_type_u(str, va_arg(ap, unsigned int));
	else if (**str == 'x' || **str == 'X')
		result += ft_type_hexa(str, va_arg(ap, unsigned int));
	else if (**str == 'p')
		result += ft_type_pointer(str, va_arg(ap, unsigned long int));
	else if (**str == '%')
		result += ft_type_sing(str);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			result;

	result = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && ft_check(*(str + 1)))
		{
			str++;
			result += type(&str, ap);
		}
		else
		{
			result += 1;
			write(1, str++, 1);
		}
	}
	va_end(ap);
	return (result);
}
