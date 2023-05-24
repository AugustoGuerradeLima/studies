CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

acai:
	@mkdir -p $(BUILDDIR)/acai/
	$(CC) $(CFLAGS) -c $(SRCDIR)/acai.cpp -o $(BUILDDIR)/acai/acai.o

cachorro_quente:
	@mkdir -p $(BUILDDIR)/cachorro_quente/
	$(CC) $(CFLAGS) -c $(SRCDIR)/cachorro_quente.cpp -o $(BUILDDIR)/cachorro_quente/cachorro_quente.o

pedido:
	@mkdir -p $(BUILDDIR)/pedido/
	$(CC) $(CFLAGS) -c $(SRCDIR)/pedido.cpp -o $(BUILDDIR)/pedido/pedido.o

pizza:
	@mkdir -p $(BUILDDIR)/pizza/
    $(CC) $(CFLAGS) -c $(SRCDIR)/pizza.cpp -o $(BUILDDIR)/pizza/pizza.o

produto:
	@mkdir -p $(BUILDDIR)/produto/
	$(CC) $(CFLAGS) -c $(SRCDIR)/produto.cpp -o $(BUILDDIR)/produto/produto.o

util:
	@mkdir -p $(BUILDDIR)/util/
	$(CC) $(CFLAGS) -c $(SRCDIR)/util.cpp -o $(BUILDDIR)/util/util.o

venda:
	@mkdir -p $(BUILDDIR)/venda/
	$(CC) $(CFLAGS) -c $(SRCDIR)/venda.cpp -o $(BUILDDIR)/venda/venda.o

main: acai cachorro_quente pedido produto util venda pizza
	$(CC) $(CFLAGS) $(BUILDDIR)/acai/acai.o $(BUILDDIR)/cachorro_quente/cachorro_quente.o $(BUILDDIR)/pedido/pedido.o $(BUILDDIR)/produto/produto.o $(BUILDDIR)/util/util.o $(BUILDDIR)/venda/venda.o $(BUILDDIR)/pizza/pizza.o $(SRCDIR)/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)