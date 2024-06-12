CC = gcc
CFLAGS = -Wall -Wextra 

SRC=src/pa1.c
OUT=bin/pa1.out

all: $(OUT)
	@./$(OUT)

$(OUT): $(SRC)
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin/*