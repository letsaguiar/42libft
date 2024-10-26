CC := gcc
CFLAGS := -Wall -Wextra - Werror

SRC_FILES := \

OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

NAME := libft.a

.PHONY: all clean fclean re

all: $(NAME)


$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all