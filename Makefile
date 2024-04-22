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
	ft_isspace.c \
	ft_strlen.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strlcpy.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memrchr.c \
	ft_memcmp.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_atoi.c \
	ft_calloc.c
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
