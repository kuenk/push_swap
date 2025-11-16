NAME	= push_swap
SRC   	= ft_push_swap.c src/ft_utilities.c src/ft_lists.c src/ft_validation.c src/ft_sort.c src/a_kind_of_move.c
CFLAGS	= -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDE = -I include -I $(LIBFT_DIR)

OBJS = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME) : $(OBJS)
	cc $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME) $(INCLUDE)

%.o : %.c
	cc $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean fclean re