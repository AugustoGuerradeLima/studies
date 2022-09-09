#include <stdio.h>

int main()
{
    int i, j, key; // data
    int A[] = {5, 2, 4, 6, 1, 3};

    for (j = 1; j <= 6; j = j + 1)
    {
        key = A[j];
        // inserir A[j] na sequência ordenada A[1...j-1]
        i = j;
        while (i > 0 && A[i - 1] > key)
        {
            A[i] = A[i - 1];
            i = i - 1;
        } // end while()
        A[i] = key;
    } // end for()
    for (int count = 0; count < 6; count = count + 1)
    {
        printf("%d\t", A[count]);
    } // end for()
} // end main()
