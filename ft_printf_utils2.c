#include "ft_printf.h"

void	ft_print_result_char(const char **str, char *ap)
{
	while (*ap)
		write(1, ap++, 1);
	(*str)++;
}

void	ft_print_result_c(const char **str, int ap)
{
	write(1, &ap, 1);
	(*str)++;
}

void	ft_print_result_int(const char **str, int ap)
{
	char	*number;

	number = ft_itoa(ap);
	while(*number)
		write(1, number++, 1);
	(*str)++;
}

void	ft_print_result_i(const char **str, int ap)
{
	char	*number;

	number = ft_itoa(ap);
	while(*number)
		write(1, number++, 1);
	(*str)++;
}

void	ft_print_result_u(const char **str, unsigned int ap)
{
	char	*number;

	number = ft_itoa(ap);
	while(*number)
		write(1, number++, 1);
	(*str)++;
}

void	ft_print_result_h(const char **str, unsigned int ap)
{
	char	*number;

	number = ft_itoa_base(ap, "0123456789abcdef");
	while(*number)
		write(1, number++, 1);
	(*str)++;
}


void	ft_print_result_p(const char **str, unsigned long ap)
{
	char	*number;

	number = ft_itoa_base(ap, "0123456789abcdef");
	write(1, "0x", 2);
	while(*number)
		write(1, number++, 1);
	(*str)++;
}
