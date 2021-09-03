#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	size_t		count;
	int			flag;
	va_list		ap;

	va_start(ap, str);
	count = -1;
	flag = 1;
	while(*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's')
				ft_print_result_char(&str, va_arg(ap, char *));
			if (*str == 'c')
				ft_print_result_c(&str, va_arg(ap, int));
			if (*str == 'd')
				ft_print_result_int(&str, va_arg(ap, int));
			if (*str == 'i')
				ft_print_result_i(&str, va_arg(ap, int));
			if (*str == 'u')
				ft_print_result_u(&str, va_arg(ap, unsigned int));
			if (*str == 'x' || *str == 'X')
				ft_print_result_h(&str, va_arg(ap, unsigned int));
			if (*str == 'p')
				ft_print_result_p(&str, va_arg(ap, unsigned long int));
		}
		write(1, str++, 1);
	}
	return (0);
}

int main (void)
{
	unsigned long int	i;
	i = 550;

	ft_printf("A minha string é: = %s\n", "Weltom");
	ft_printf("O meu caracter é: = %c\n", 'W');
	ft_printf("O meu número é:   = %d\n", 14510);
	ft_printf("O meu número é:   = %i\n", 14510);
	ft_printf("O meu número é:   = %u\n", 500);
	ft_printf("O meu ptr é: 	 = &p\n", &i);
	ft_printf("Imprimindo o % em:  %%\n");
}
