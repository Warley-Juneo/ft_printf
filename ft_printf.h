#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "./libft/libft.h"

int	ft_type_c(const char **str, int ap);
int	ft_type_char(const char **str, char *ap);
int	ft_type_hexa(const char **str, unsigned int ap);
int	ft_type_int(const char **str, int ap);
int	ft_type_pointer(const char **str, unsigned long ap);
int	ft_type_u(const char **str, unsigned int ap);
int	ft_printf(const char *str, ...);
#endif
