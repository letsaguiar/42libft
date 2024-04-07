CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_HEADERS := src
SRC_FILES := \
	src/ft_isalpha.c \
	src/ft_isdigit.c \
	src/ft_isalnum.c \
	src/ft_isascii.c \
	src/ft_isprint.c
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

UNITY_HEADERS := unity/src
UNITY_FILES := $(wildcard unity/src/*.c)
TEST_FILES := $(wildcard test/*.c)
TEST_EXE := $(subst .c,.test,$(TEST_FILES))

TARGET := libft.a

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	ar rv $(TARGET) $(OBJ_FILES)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_EXE)

test/%.test: test/%.c $(TARGET) $(UNITY_FILES)
	@$(CC) $(CFLAGS) -I$(SRC_HEADERS) -I$(UNITY_HEADERS) $< $(UNITY_FILES) -o $@ -L. -lft
	./$@

clean:
	rm -rf $(OBJ_FILES) $(TEST_EXE)

fclean: clean
	rm -rf $(TARGET)
