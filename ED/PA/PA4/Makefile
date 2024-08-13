CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = src
INC = include
OBJ = obj
BIN = bin

SOURCES = $(wildcard $(SRC)/*.c)
OBJECTS = $(SOURCES:$(SRC)/%.c=$(OBJ)/%.o)
OUT = $(BIN)/pa4.out

all: $(OUT)

$(OUT): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(OUT)

$(OBJ)/%.o: $(SRC)/%.c | $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ):
	mkdir -p (OBJ)

clean:
	rm -rf $(OBJ)/*.o $(OUT)

.PHONY: all clean
