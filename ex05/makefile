CC=gcc
NORM=norminette
OUTPUT_BIN=debug

test-norm:
	$(NORM) *.c

build:
	$(CC) -o $(OUTPUT_BIN) *.c -Wall -Wextra

run:
	./$(OUTPUT_BIN)

clean:
	clear
