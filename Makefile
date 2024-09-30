CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram

SRC = my_ngram.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all