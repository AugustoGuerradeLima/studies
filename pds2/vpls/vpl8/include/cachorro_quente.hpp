#ifndef CACHORRO_QUENTE_HPP
#define CACHORRO_QUENTE_HPP
#include "produto.hpp"
    class CachorroQuente : public Produto
    {
        private:
            int _num_salsichas;
            vector<string> _complementos;
            bool _prensado;
            
        public:
            CachorroQuente(int num_salsichas, vector<string>& complementos, bool prensado, int quantidade);
            string descricao() const override; 
            float calcPreco() override;
    };
#endif