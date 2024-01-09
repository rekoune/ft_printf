CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_print_char.c ft_print_digit.c ft_print_hexa.c ft_print_string.c ft_printf.c
NAME = libftprintf.a
HEADER = ft_printf.h
TOOBJ = ${CFILES:.c=.o}

all : $(NAME)

$(NAME) : $(TOOBJ) 
	ar rcs $(NAME) $(TOOBJ)
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -f $(TOOBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

 .PHONY: clean fclean re all