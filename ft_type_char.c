/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:33:48 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 18:40:20 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_char(const char **str, char *ap)
{
	int	result;

	result = ft_strlen(ap);
	if (!ap)
		return (NULL);
	while (*ap)
		write(1, ap++, 1);
	(*str)++;
	return (result);
}
