LIBFT_PATH =./libft
LIBFT =		$(LIBFT_PATH)/libft.a

SOURCES =	ft_type_c.c ft_type_char.c ft_type_hexa.c ft_type_int.c
SOURCES +=	ft_type_pointer.c ft_type_u.c ft_type_sing.c ft_printf.c

OBJECTS =	$(SOURCES:.c=.o)

NAME =		libftprintf.a

CC =		clang
CGLAGS =	-Wextra -Wall -Werror

ARFLAGS =	rcs
AR =		ar
RM =		rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:		$(LIBFT) $(NAME)

$(NAME):	 $(OBJECTS)
			cp	$(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT):
			$(MAKE) -C $(LIBFT_PATH)
			$(MAKE) -C $(LIBFT_PATH) bonus

clean:
			$(MAKE) -C $(LIBFT_PATH) clean
			$(RM) $(OBJECTS)

fclean:		clean
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(RM) $(NAME)

re:			fclean all

exe:
			clear && clang ft_printf.c libftprintf.a && ./a.out

.PHONY:		all clean fclean re libft
