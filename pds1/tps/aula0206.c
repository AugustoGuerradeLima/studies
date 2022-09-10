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