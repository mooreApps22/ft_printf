NAME = 			libftprintf.a
CC = 			cc -Wall -Wextra -Werror
SRC =			$(wildcard src/*.c) 
OBJ = 			$(SRC:.c=.o)
HEADER = 		include/libftprintf.h libft/include/libft.h
LIBFT = 		libft/libft.a

all: $(NAME) $(LIBFT)

$(LIBFT):
	@make -C libft/ all

$(NAME): $(LIBFT) $(OBJ)
	@ar rcs $(NAME) src/*.o libft/src/*.o

%.o: %.c $(HEADER)
	@$(CC) -c $< -o $@

clean:
	@make -C ./libft clean
	@rm -f src/*.o
	@rm -f *.o

fclean: clean
	@make -C ./libft fclean
	@rm -f $(NAME)

re: fclean all

main: main.c
	@$(CC) main.c $(NAME) -o main

mclean: clean fclean
	@rm -f main 

.PHONY: all main clean fclean mclean re libft
