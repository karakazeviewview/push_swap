SOURCES = \
	msrcs/push_swap.c msrcs/push_swap_utils.c msrcs/instructions.c msrcs/sort.c msrcs/sort_utils.c \
	msrcs/sort_big_utils.c
BSOURCES = \
	./bonus/checker_bonus.c ./bonus/push_swap_utils_bonus.c ./bonus/instructions_bonus.c ./bonus/gnl_bonus.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: push_swap

bonus: push_swap checker

push_swap: $(OBJECTS) libft
	gcc -o $@ $(OBJECTS) -Llibft -lft

checker: $(BOBJECTS) libft
	gcc -o $@ $(BOBJECTS) -Llibft -lft

libft:
	make -C libft bonus

clean:
	rm -f $(OBJECTS) $(BOBJECTS)
	make -C libft clean

fclean: clean
	rm -f push_swap checker libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re
