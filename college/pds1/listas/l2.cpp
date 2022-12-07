//Augusto Guerra de Lima - 2022101086
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
//questao2
void media_confere(float a, float b, float c)
{
    if((a+b+c)== media(a,b,c)*3)
    {
         cout << "certo" << endl;
    }
    else
    {
        cout << "errado" << endl;
    }
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
    media_confere(a,b,c);//questao2
} // end f1()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1b
float mediaPonderada(float a, float b, float c)
{
    float result = 0.0;
    result = ((a * 3) + (b * 4) + (c * 5)) / (12.0);
    return (result);
}
//questao2
void mediaP_confere(float a, float b, float c)
{
    if(((a*3)+(b*4)+(c*5))== mediaPonderada(a,b,c)*12.0)
    {
        cout<< "certo"<<endl;
    }
    else
    {
        cout<< "errado"<<endl;
    }
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
    mediaP_confere(a,b,c);//questao2
} // end f2()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1c
float perimetroCirculo(float r)
{
    float result = 2 * M_PI * r;
    return (result);
} // end perimetroCirculo()
//questao2
void perimetroC_confere(float r)
{
    if(r == perimetroCirculo(r)/2.0*M_PI)
    {
        cout<< "certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
}
// procedimento f3()
void f3(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "perimetro: " << perimetroCirculo(raio) << endl;
    perimetroC_confere(raio);//questao2
} // end f3()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1d
float areaCirculo(float r)
{
    float result = M_PI * pow(r, 2);
    return (result);
} // end areaCirculo()
//questao2
void areaC_confere(float r)
{
    if(r==sqrt(areaCirculo(r)/M_PI))
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
}
// procedimento f4()
void f4(void)
{
    float raio;
    cout << "escolha o raio de um circulo: " << endl;
    cin >> raio;
    cout << "area: " << areaCirculo(raio) << endl;
    areaC_confere(raio);//questao2
} // end f4()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1e
float areaTriangulo(float b, float c)
{
    float result = b * c / 2;
    return (result);
}//end AreaTriangulo
//questao2
void areaT_confere(float b, float c)
{
    if((b*c)==areaTriangulo(b,c)*2)
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
}
//procedimento f5()
void f5(void)
{
    float b, c;
    cout << "base: " << endl;
    cin >> b;
    cout << "altura: " << endl;
    cin >> c;
    cout << "area: " << areaTriangulo(b, c) << endl;
    areaT_confere(b,c);//questao2
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1f
float areaCaixa(float a, float b, float c)
{
    float result = 2 * (a * c) + 2 * (a * b) + 2 * (b * c);
    return (result);
}
//questao2
void aC_confere(float a,float b,float c)
{
    if((a*b+b*c+c*a)==areaCaixa(a,b,c)/2.0)
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
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
    aC_confere(a,b,c);//questao2
} // end f6()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1g
float volumeCaixa(float a, float b, float c)
{
    float result = a * b * c;
    return (result);
}
//questao2
void vC_confere(float a, float b, float c)
{
    if(a*b*c/volumeCaixa(c,b,a)==1.0)
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
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
    vC_confere(a,b,c);//questao2
} // end f7()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1h
float areaCilindro(float r, float h)
{
    float result = 2 * (M_PI * pow(r, 2)) + (2 * M_PI * r * h);
    return (result);
}
//questao2
void aCi_confere(float r,float h)
{
    if((h < (areaCilindro(r,h)-(2*M_PI*r*r))/(2*M_PI*r)+0.001)||(h > (areaCilindro(r,h)-(2*M_PI*r*r))/(2*M_PI*r)-0.001))
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
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
    aCi_confere(raio,h);//questao2
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1i
float volumeCilindro(float r, float h)
{
    float result = M_PI * pow(r, 2) * h;
    return (result);
}
//questao2
void vC_confere(float r,float h)
{
    if(h == (volumeCilindro(r,h)/M_PI*r*r))
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
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
    vC_confere(raio,h);//questao2
} // end f9()
//--------------------------------------------------------------------------------------------------------------------------------------------------------questao-1j
float hipotenusa(float b, float c)
{
    float a = sqrt((b * b) + (c * c));
    return (a);
}
//questao2
void hip_confere(float b, float c)
{
    if((hipotenusa(b,c)*hipotenusa(b,c))==(b*b)+(c*c))
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
}
//procedimento f10()
void f10(void)
{
    float b, c;
    cout << "de o valor dos catetos: " << endl;
    cin >> b;
    cin >> c;
    cout << "hipotenusa: " << hipotenusa(b, c) << endl;
    hip_confere(b,c);//questao2
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
//questao2
void raiz_confere(float a, float b, float c)
{
    float x;
    cout<<"insira o valor de uma das raizes"<<endl;
    cin>>x;
    if(a*(x*x)+b*(x)+c==0.0)
    {
        cout<<"certo"<<endl;
    }
    else
    {
        cout<<"errado"<<endl;
    }
}
//procedimento f11()
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
    raiz_confere(a,b,c);//questao2
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
