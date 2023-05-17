#ifndef ACAI_HPP
#define ACAI_HPP
#include "produto.hpp"
    class Acai : public Produto
    {
        private:
            int _tamanho;
            vector<string> _complementos;

        public:
            Acai(int tamanho,vector<string>& complementos,int quantidade);
            string descricao() const override;
            float calcPreco() override;
    };
#endif