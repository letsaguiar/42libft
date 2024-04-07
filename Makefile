CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_HEADERS := src
SRC_FILES := \
	src/ft_isalpha.c
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

UNITY_HEADERS := unity/src
UNITY_FILES := $(wildcard unity/src/*.c)
TEST_FILES := $(wildcard test/*.c)
TEST_EXE := $(subst .c,.test,$(TEST_FILES))

TARGET := libft.a

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	ar rv $(TARGET) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	@$(foreach FILE, $(SRC_FILES), \
		$(CC) $(CFLAGS) -c $(FILE) -o $(subst .c,.o,$(FILE)) \
	)

test: $(TEST_EXE)
	@$(foreach TEST, $(TEST_EXE), \
		./$(TEST) \
	)

$(TEST_EXE): $(TARGET) $(UNITY_FILES) $(TEST_FILES)
	$(foreach TEST, $(TEST_FILES), \
		$(CC) $(CFLAGS) -I$(SRC_HEADERS) -I$(UNITY_HEADERS) $(TEST) $(UNITY_FILES) -o $(subst .c,.test,$(TEST)) -L. -lft \
	)

clean:
	rm -rf $(OBJ_FILES) $(TEST_EXE)

fclean: clean
	rm -rf $(TARGET)
