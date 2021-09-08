/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:59:42 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/09/08 18:36:10 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digit(long int n)
{
	int	count;
	int	is_neg;

	is_neg = (n < 0);
	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count + is_neg);
}
