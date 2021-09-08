/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:35:53 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 14:36:13 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_result_hexa(const char **str, unsigned int ap)
{
	char	*number;
	int		result;

	result = ft_count_digit(ap);
	number = ft_itoa_base(ap, "0123456789abcdef");
	while(*number)
		write(1, number++, 1);
	(*str)++;
	return (result);
}
