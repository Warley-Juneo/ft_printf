/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:33:48 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 14:34:11 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_result_char(const char **str, char *ap)
{
	int	result;

	result = ft_strlen(ap);
	while (*ap)
		write(1, ap++, 1);
	(*str)++;
	return (result);
}
