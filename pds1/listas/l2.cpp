#include <iostream>
using namespace std;

//--------------------------------------questao-1
float media(float a, float b, float c)
{
    float result = 0.0;
    result = (a + b + c) / 3.0;
    return (result);
}
// procedimento f1()
void f1(void)
{
    float a, b, c;
    cout << "escolha 3 numeros" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "media: " << media(a, b, c) << endl;
} // end f1()
//--------------------------------------questao-2

//--------------------------------------main()
int main()
{
    char c = 'z';
    do
    {
        cout << "a) media" << endl;
        cout << "b) media ponderada" << endl;
        cout << "c)perimetro" << endl;
        cout << "d)area do circulo" << endl;
        cout << "e)area do triangulo" << endl;
        cout << "f) area da caixa" << endl;
        cout << "g) volume da caixa" << endl;
        cout << "h)area do cilindro" << endl;
        cout << "i)volume do cilindro" << endl;
        cout << "j)hipotenusa" << endl;
        cout << "k)raiz positiva" << endl;
        cin >> c;

        switch (c)
        {
        case 'a':
            f1();
            break;
        default:
            cout << "valor invalido" << endl;
            break;
        }
    } while (c != 'z');
    return (0);
} // end main()