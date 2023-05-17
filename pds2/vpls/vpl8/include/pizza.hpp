#ifndef PIZZA_HPP
#define PIZZA_HPP
#include "produto.hpp"
    class Pizza : public Produto
    {
        private:
            string _sabor;
            int _num_pedacos;
            bool _borda_recheada;

        public:
            Pizza(const string& sabor, int pedacos, bool borda_recheda, int qtd);
            string descricao() const override;  
            float calcPreco() override;
    };
#endif