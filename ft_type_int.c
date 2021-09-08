/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:35:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 18:23:36 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_int(const char **str, int ap)
{
	char	*number;
	int		result;

	result = ft_count_digit(ap);
	number = ft_itoa(ap);
	if (*number)
		ft_putstr_fd(number, 1);
	(*str)++;
	ft_free_ptr(&number);
	return (result);
}
