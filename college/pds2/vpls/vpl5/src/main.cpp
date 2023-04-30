#include <iostream>

// Comentar / Excluir a linha abaixo:
// #include "old.hpp"

// Descomentar o bloco abaixo:

#include "estoque.hpp"
#include "geladeira.hpp"
#include "fogao.hpp"


// Não modifique a função main
int main() {
    char opcao;
    Estoque estoque = Estoque();
    while(std::cin >> opcao) {
   	switch (opcao) {
       		case 'g': {
        		int capacidade_em_litros, numero_de_portas;
        		std::cin >> capacidade_em_litros >> numero_de_portas;
        		estoque.armazena_geladeira(capacidade_em_litros, numero_de_portas);
        	}
       		break;
        	case 'f': {
            		int numero_de_queimadores, capacidade_forno;
            		std::cin >> numero_de_queimadores >> capacidade_forno;
            		estoque.armazena_fogao(numero_de_queimadores, capacidade_forno);
        	}
        	break;
        	case 'v': {
            		char produto;
            		std::cin >> produto;
            		if (produto == 'g') {
                		int capacidade_em_litros, numero_de_portas;
                		std::cin >> capacidade_em_litros >> numero_de_portas;
                		estoque.vende_geladeira(capacidade_em_litros, numero_de_portas);
            		} else if (produto == 'f') {
                		int numero_de_queimadores, capacidade_forno;
                		std::cin >> numero_de_queimadores >> capacidade_forno;
                		estoque.vende_fogao(numero_de_queimadores, capacidade_forno);
            		}
        	}
       		break;
        	case 'i': {
            		estoque.exibe_geladeiras();
            		estoque.exibe_fogoes();
        	}
        	break;
        	case 'q': {
            		std::cout << estoque.quantidade_geladeiras() << " ";
            		std::cout << estoque.quantidade_fogoes() << std::endl;
        	}
        	break;
        	default: 
        		exit(1);
        	break;
    	}
    }
    return 0;
}
