/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:36:35 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 20:57:22 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_pointer(const char **str, unsigned long ap)
{
	char	*number;
	int		result;

	number = ft_itoa_base(ap, "0123456789abcdef");
	result = ft_strlen(number);
	write(1, "0x", 2);
	if (*number)
		ft_putstr_fd(number, 1);
	ft_free_ptr(&number);
	(*str)++;
	return (result + 2);
}
