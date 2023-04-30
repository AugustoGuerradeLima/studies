CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

estoque:
	@mkdir -p $(BUILDDIR)/estoque/
	$(CC) $(CFLAGS) -c $(SRCDIR)/estoque.cpp -o $(BUILDDIR)/estoque/estoque.o

geladeira:
	@mkdir -p $(BUILDDIR)/geladeira/
	$(CC) $(CFLAGS) -c $(SRCDIR)/geladeira.cpp -o $(BUILDDIR)/geladeira/geladeira.o


fogao:
	@mkdir -p $(BUILDDIR)/fogao/
	$(CC) $(CFLAGS) -c $(SRCDIR)/fogao.cpp -o $(BUILDDIR)/fogao/fogao.o


main: estoque geladeira fogao
	$(CC) $(CFLAGS) $(BUILDDIR)/estoque/estoque.o $(BUILDDIR)/geladeira/geladeira.o $(BUILDDIR)/fogao/fogao.o $(SRCDIR)/main.cpp -o $(TARGET)


clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)
