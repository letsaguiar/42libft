CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_HEADERS := src
SRC_FILES := \
	src/ft_isalpha.c
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

TARGET := libft.a

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	ar rv $(TARGET) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	$(foreach FILE, $(SRC_FILES), \
		$(CC) $(CFLAGS) -c $(FILE) -o $(subst .c,.o,$(FILE)) \
	)

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(TARGET)
