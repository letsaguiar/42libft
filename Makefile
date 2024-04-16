CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_HEADERS := src
SRC_FILES := \
	ft_islower.c \
	ft_isupper.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_toupper.c \
	ft_tolower.c
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
