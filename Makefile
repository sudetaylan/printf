NAME=libftprintf.a

SRCS= ft_ofuncts.c ft_printf.c

OBJS= $(SRCS:.c=.o)

RM= rm -f
CC = cc
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)


$(NAME): $(OBJS) 
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
