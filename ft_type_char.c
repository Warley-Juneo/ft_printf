/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:33:48 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 21:08:11 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_char(const char **str, char *ap)
{
	int	result;

	if (!ap)
	{
		write(1, "(null)", 6);
		(*str)++;
		return (6);
	}
	result = ft_strlen(ap);
	if (*ap)
		ft_putstr_fd(ap, 1);
	(*str)++;
	return (result);
}
