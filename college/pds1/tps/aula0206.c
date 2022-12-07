#include <stdio.h>

int main()
{
    char ch;
    int y;
    scanf("%c", &ch);

    y = (int)ch - 97;

    y = (y / 3 + 2) % 10;

    printf("%d", y);
} // end main()
/*
Deve-se escrever um programa que leia uma letra e a mapeia para as letras no telefone fixo, para digitar uma senha bancária.
O programa deve ler uma letra e mapear para um número conforme o descrito abaixo:
a, b, c -> 2
d, e, f -> 3
g, h, i -> 4
j, k, l -> 5
m, n, o -> 6
p, q, r -> 7
s, t, u -> 8
v, w, x -> 9
y, z -> 0
*/