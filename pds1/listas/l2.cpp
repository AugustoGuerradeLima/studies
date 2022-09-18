#include <iostream>
#include <cmath>
using namespace std;
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1a
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
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1b
float mediaPonderada(float a, float b, float c)
{
    float result = 0.0;
    result = ((a * 3) + (b * 4) + (c * 5)) / 3.0;
    return (result);
}
// procedimento f2()
void f2(void)
{
    float a, b, c;
    cout << "sabendo que temos peso 3, 4 e 5 respectivamente escolha tres numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "media ponderada: " << mediaPonderada(a, b, c) << endl;
} // end f2()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1c
float perimetroCirculo(float r)
{
    float result = 2 * M_PI * r;
    return (result);
} // end perimetroCirculo()
// procedimento f3()
void f3(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "perimetro: " << perimetroCirculo(raio) << endl;
} // end f3()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1d
float areaCirculo(float r)
{
    float result = M_PI * pow(r, 2);
    return (result);
} // end areaCirculo()
// procedimento f4()
void f4(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "area: " << areaCirculo(raio) << endl;
} // end f4()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1e
float areaTriangulo(float b, float c)
{
    float result = b * c / 2;
    return (result);
}
void f5(void)
{
    float b, c;
    cout << "base: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "area: " << areaTriangulo(b, c) << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1f
float areaCaixa(float a, float b, float c)
{
    float result = 4 * (a * c) + 2 * (a * b);
    return (result);
}
// procedimento f6()
void f6(void)
{
    float a, b, c;
    cout << "comprimento: " << endl;
    cin >> a;
    cout << "largura: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "area da caixa: " << areaCaixa(a, b, c) << endl;
} // end f6()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1g
float volumeCaixa(float a, float b, float c)
{
    float result = a * b * c;
    return (result);
}
// procedimento f7()
void f7(void)
{
    float a, b, c;
    cout << "comprimento: " << endl;
    cin >> a;
    cout << "largura: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "volume da caixa: " << volumeCaixa(a, b, c) << endl;
} // end f7()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1h
float areaCilindro(float r, float h)
{
    float result = 2 * (M_PI * pow(r, 2)) + (2 * M_PI * r * h);
    return (result);
}
// procedimento f8()
void f8(void)
{
    float raio, h;
    cout << "raio: " << endl;
    cin >> raio;
    cout << "altura: " << endl;
    cin >> h;
    cout << "area do cilindro: " << areaCilindro(raio, h) << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1i
float volumeCilindro(float r, float h)
{
    float result = M_PI * pow(r, 2) * h;
    return (result);
}
// procedimento f9()
void f9(void)
{
    float raio, h;
    cout << "raio: " << endl;
    cin >> raio;
    cout << "altura: " << endl;
    cin >> h;
    cout << "volume do cilindro: " << volumeCilindro(raio, h) << endl;
} // end f9()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1j
float hipotenusa(float b, float c)
{
    float a = sqrt((b * b) + (c * c));
    return (a);
}
void f10(void)
{
    float b, c;
    cout << "de o valor dos catetos: " << endl;
    cin >> b;
    cin >> c;
    cout << "hipotenusa: " << hipotenusa(b, c) << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1k
void calculoDeRaiz(float a, float b, float c)
{
    float delta = b * b - 4.0 * a * c;
    float x1, x2;
    if (delta >= 0.0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "raizes: " << endl;
        if (x1 >= 0.0)
        {
            cout << x1 << endl;
        }
        if (x2 >= 0.0)
        {
            cout << x2 << endl;
        }
        if (x1 < 0.0 && x2 < 0.0)
        {
            cout << "nao ha raizes positivas" << endl;
        }
    }
    else
    {
        cout << "nao existem raizes reais" << endl;
    }
}
void f11(void)
{
    float a, b, c;
    cout << "coeficiente a: " << endl;
    cin >> a;
    cout << "coeficiente b: " << endl;
    cin >> b;
    cout << "coeficiente c: " << endl;
    cin >> c;
    calculoDeRaiz(a, b, c);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------main()
int main()
{
    char c = '0';
    do
    {
        cout << "a)media" << endl;
        cout << "b)media ponderada" << endl;
        cout << "c)perimetro do circulo" << endl;
        cout << "d)area do circulo" << endl;
        cout << "e)area do triangulo" << endl;
        cout << "f)area da caixa" << endl;
        cout << "g)volume da caixa" << endl;
        cout << "h)area do cilindro" << endl;
        cout << "i)volume do cilindro" << endl;
        cout << "j)hipotenusa" << endl;
        cout << "k)raiz positiva" << endl;
        cout << "0)parar" << endl;
        cin >> c;

        switch (c)
        {
        case 'a':
            f1();
            break;
        case 'b':
            f2();
            break;
        case 'c':
            f3();
            break;
        case 'd':
            f4();
            break;
        case 'e':
            f5();
            break;
        case 'f':
            f6();
            break;
        case 'g':
            f7();
            break;
        case 'h':
            f8();
            break;
        case 'i':
            f9();
            break;
        case 'j':
            f10();
            break;
        case 'k':
            f11();
            break;
        case '0':
            break;
        default:
            cout << "valor invalido" << endl;
            break;
        }
    } while (c != '0');
    return (0);
} // end main()
