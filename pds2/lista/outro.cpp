class Lampada {
    private:
        int _watts;
        float _preco;
    public:
        Lampada(int w = 0, float p = 0);
};

Lampada::Lampada(int w, float p) : _watts(w), _preco(p) {
    this->_preco = p;
    this->_watts = w;
}