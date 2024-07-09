CC = gcc
CFLAGS = -Wall -Wextra 

SRC=src/pa2.c
OUT=bin/pa2.out

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin/*

