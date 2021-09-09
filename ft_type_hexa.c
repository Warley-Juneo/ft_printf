/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:35:53 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 19:22:29 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_hexa(const char **str, unsigned int ap)
{
	char	*number;
	int		result;

	if (**str == 'x')
		number = ft_itoa_base(ap, "0123456789abcdef");
	else
		number = ft_itoa_base(ap, "0123456789ABCDEF");
	result = ft_strlen(number);
	if (*number)
		ft_putstr_fd(number, 1);
	ft_free_ptr(&number);
	(*str)++;
	return (result);
}
