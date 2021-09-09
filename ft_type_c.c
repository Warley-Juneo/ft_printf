/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:34:44 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/09 13:08:01 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_c(const char **str, int ap)
{
	if (**str == '%')
	{
		(*str)++;
		write(1, "%", 1);
		return (1);
	}
	write(1, &ap, 1);
	(*str)++;
	return (1);
}
