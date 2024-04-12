# Makefile

NAME = push_swap
CC = gcc 
CFLAGS = -Wall -Wextra  -I

SRCS =  lst_utils_1.c \
		lst_utils_2.c \
		lst_utils_3.c \
		push_swap.c \
		ft_split.c \
		ft_free_tab_2d.c \
		ft_substr.c \
		split_stack100.c \
		split_stack500.c \
		sort_stack_a_100.c \
		sort_stack_a_500.c \
		sort_two.c \
		sort_three.c \
		sort_four.c \
		sort_five.c \
		sort_7to99.c \
		sort_100.c \
		sort_500.c \
		swap_a.c \
		swap_b.c \
		swap_ab.c \
		rotate_a.c \
		rotate_b.c \
		rotate_ab.c \
		rev_rotate_a.c \
		rev_rotate_b.c \
		rev_rotate_ab.c \
		push_a.c \
		push_b.c \
		ft_atoi.c \
		ft_isdigit.c \
		parsing.c \
		lst_simplify.c \
		ft_pusw_print.c \
		lstprint.c
			

OBJECT_FILES = $(SRCS:.c=.o)

HEADER = ./

all: $(NAME) 

.c.o:
	$(CC) $(CFLAGS) $(HEADER) -c  $< -o $(<:.c=.o)

$(NAME): $(OBJECT_FILES)
	$(CC) -o $(NAME) *.o
	@echo "\n"
	@echo "\033[92m<<<<< "push_swap" exec created ! >>>>>\033[0m"

clean:
	rm -rf $(OBJECT_FILES) $(BONUS_OBJ)
	@echo "\n"
	@echo "\033[92m<<<<< object files cleaned ! >>>>>\033[0m"

fclean: clean
	rm -rf $(NAME)
	@echo "\033[92m<<<<< fclean done ! >>>>>\033[0m"

re: fclean all
	@echo "\033[92m<<<<< Make re done ! >>>>>\033[0m"
