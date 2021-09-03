LIBFT_PATH		= ./libft

LIBFT			= $(LIBFT_PATH)/libft.a
NAME			= libftprintf.a

SOURCES 		= ft_printf_utils.c ft_printf_utils2.c ft_printf.c
OBJECTS			= $(SOURCES:.c=.o)

CC				= clang
CFLAGS			= -Wall -Wextra -Werror

ARFLAGS 		= rcs
AR				= ar
RM				= rm -f

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:			$(LIBFT) $(NAME)

$(NAME):		$(OBJECTS)
				cp $(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(RM) $(OBJECTS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
