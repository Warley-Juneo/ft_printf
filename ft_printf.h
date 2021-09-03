#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_calloc(size_t nelem, size_t size);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	*ft_itoa_base(unsigned long int n, char *hex);
void	ft_putstr_fd(char *s, int fd);
void	ft_print_result_char(const char **str, char *ap);
void	ft_print_result_c(const char **str, int ap);
void	ft_print_result_int(const char **str, int ap);
void	ft_print_result_i(const char **str, int ap);
void	ft_print_result_u(const char **str, unsigned int ap);
void	ft_print_result_h(const char **str, unsigned int ap);
void	ft_print_result_p(const char **str, unsigned long ap);


#endif
