CC = gcc
CFLAGS = -Wall -Wextra 

SRC=src/pa3.c
OUT=bin/pa3.out

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf bin/*
