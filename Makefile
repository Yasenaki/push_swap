CC = cc	
CFLAGS = -Wall -Wextra -Werror -g

SRCS_DIR = ./src
SRCS = $(SRCS_DIR)aux_ps.c $(SRCS_DIR)push_aux.c \
$(SRCS_DIR)push_swap.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

LIBFT_DIR = ./src/libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(LIBFT) $(OBJS)
		cp $(LIBFT) $(NAME)
		ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f  $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) 
	make fclean -C $(LIBFT_DIR)

re: fclean all

test: $(NAME)
		cc $(CFLAGS) main.c $(NAME) -o push_swap.out
		./push_swap.out