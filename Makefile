CC = cc	
CFLAGS = -Wall -Wextra -Werror -g

SRCS = 


OBJS = $(SRCS:.c=.o)
NAME = push_swap.a

PRINTF_DIR = ./src
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(PRINTF) $(OBJS)
		cp $(PRINTF) $(NAME)
		ar rcs $(NAME) $(OBJS)

$(PRINTF):
	make -C $(PRINTF_DIR)

clean:
	rm -f  $(OBJS)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(NAME) 
	make fclean -C $(PRINTF_DIR)

re: fclean all

test: $(NAME)
		cc $(CFLAGS) main.c $(NAME) -o push_swap.out
		./push_swap.out
