#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
    class Produto
    {
        protected:
            int _quantidade{0};
            float _valor_unitario{0};

        public:
            int   getQtd()             const;
            float getValor()           const;
            virtual string descricao() const = 0;
            virtual float calcPreco() = 0;
            virtual ~Produto() =       default;
    };
#endif