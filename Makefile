CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_prt_char.c ft_prt_hexadecimal.c ft_prt_number.c ft_prt_string.c ft_ptr_pointer.c ft_ptr_unsigned.c ft_printf_utils.c
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%o:%c
	$(CC) $(CFLAGS) -c $<
clean: 
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

