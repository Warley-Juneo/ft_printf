/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:35:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 14:35:20 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_result_int(const char **str, int ap)
{
	char	*number;
	int		result;

	result = ft_count_digit(ap);
	number = ft_itoa(ap);
	while(*number)
		write(1, number++, 1);
	(*str)++;
	return (result);
}
