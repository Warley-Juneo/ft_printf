/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:36:35 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 14:36:45 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_result_pointer(const char **str, unsigned long ap)
{
	char	*number;
	int		result;

	result = ft_count_digit(ap);
	number = ft_itoa_base(ap, "0123456789abcdef");
	write(1, "0x", 2);
	while(*number)
		write(1, number++, 1);
	(*str)++;
	return (result);
}
