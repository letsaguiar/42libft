CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_HEADERS := src
SRC_FILES := \
	ft_isupper.c \
	ft_islower.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

TARGET := libft.a

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	ar rv $(TARGET) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(TARGET)
