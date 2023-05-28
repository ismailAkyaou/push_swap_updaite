CC = cc -g
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = push_swap.h
NAME = push_swap
NAME_BNS = checker

SURS =	main.c \
		tools/tools1.c \
		libft/ft_strlen.c \
		libft/ft_strjoin.c \
		libft/ft_split.c \
		libft/ft_atoi.c \
		libft/ft_substr.c \
		libft/ft_strdup.c \
		serce/link_lest.c \
		serce/cheak_douple.c \
		serce/ft_swap.c \
		serce/ft_instruction_1.c \
		serce/ft_instruction_2.c \
		serce/ft_instruction_3.c \
		serce/ft_sort_3.c \
		serce/ft_sort_4.c \
		serce/ft_sort_5.c \
		serce/sheck_sort.c \
		chunks/ft_algo1.c \
		serce/ft_mini_sort.c \
		serce/ft_clean_up.c \
		serce/ft_error.c

BNS =	push_swap_bonus/checker_bonus.c \
		tools_bonus/tools_1.c \
		libft_bonus/ft_strlen_bonus.c \
		libft_bonus/ft_strjoin_bonus.c \
		libft_bonus/ft_split_bonus.c \
		libft_bonus/ft_atoi_bonus.c \
		libft_bonus/ft_memcmp_bonus.c \
		libft_bonus/ft_substr_bonus.c \
		libft_bonus/ft_strdup_bonus.c \
		serce_bonus/link_lest_bonus.c \
		serce_bonus/cheak_douple_bonus.c \
		serce_bonus/ft_swap_bonus.c \
		serce_bonus/ft_instruction_1_bonus.c \
		serce_bonus/ft_instruction_2_bonus.c \
		serce_bonus/ft_instruction_3_bonus.c \
		serce_bonus/sheck_sort_bonus.c \
		get_next_line_bonus/get_next_line.c \
		get_next_line_bonus/get_next_line_utils.c \
		main_bouns.c \
		serce_bonus/ft_clean_up_bonus.c


OBJ = $(SURS:.c=.o)
OBJ_BNS = $(BNS:.c=.o)

all: $(NAME) 

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(NAME_BNS)
$(NAME_BNS): $(OBJ_BNS) push_swap_bonus.h
	$(CC) $(CFLAGS) $(OBJ_BNS) -o $(NAME_BNS)

clean:
	$(RM) $(OBJ) $(OBJ_BNS)

fclean: clean
	$(RM) $(NAME) $(NAME_BNS)

re: fclean all
