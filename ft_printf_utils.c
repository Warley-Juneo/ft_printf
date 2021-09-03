#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

void	*ft_memset(void *str, int c, size_t n)
{
	void	*string1;

	string1 = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (string1);
}

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*result;

	if (nelem * size > 2147483647)
		return (NULL);
	result = malloc(nelem * size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, nelem * size);
	return (result);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int ft_count_digit(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count + 1);
}

static int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static void ft_rev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str) - 1;
	i = 0;
	while (str[i] && i < length)
	{
		tmp = str[i];
		str[i] = str[length];
		str[length] = tmp;
		i++;
		length--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	size_t	is_neg;
	size_t	count_digit;

	count_digit = ft_count_digit(n);
	is_neg = (n < 0);
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_calloc(count_digit + is_neg, sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (n != 0)
	{
		str[count++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[count] = '-';
	ft_rev(str);
	return (str);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}

static int ft_count_digit_two(unsigned long int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count + 1);
}


char	*ft_itoa_base(unsigned long int n, char *hex)
{
	char	*str;
	size_t	count;
	size_t	count_digit;
	int		base;

	base = ft_strlen(hex);
	count_digit = ft_count_digit_two(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_calloc(count_digit, sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (n != 0)
	{
		str[count++] = hex[n % base];
		n = (n / base);
	}
	ft_rev(str);
	return (str);
}
