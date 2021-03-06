/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:21:55 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/10/08 11:21:56 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_type_c(const char **str, int ap);
int	ft_type_char(const char **str, char *ap);
int	ft_type_hexa(const char **str, unsigned int ap);
int	ft_type_int(const char **str, int ap);
int	ft_type_pointer(const char **str, unsigned long ap);
int	ft_type_u(const char **str, unsigned int ap);
int	ft_type_sing(const char **str);
int	ft_printf(const char *str, ...);
#endif
