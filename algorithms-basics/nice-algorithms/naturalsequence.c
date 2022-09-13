#include <stdio.h>

int nDigitsCmp(int n)
{
    int sum = 0;
    int mult = 0;
    int count = 1;
    int countalg = 1;

    while (sum < n)
    {
        mult = 9 * count * countalg;
        sum = sum + mult;
        count = count * 10;
        countalg = countalg + 1;
    } // end while()

    sum = n - sum;
    return (sum);
} // end nDigitsCmp

int main()
{
    int position = 0;
    int digitsAccount = 0;
    printf("term position: ");
    scanf("%d", &position);

    digitsAccount = nDigitsCmp(position);
    printf("%d ", digitsAccount);
    // return
    return (0);
} // end main()
  /*
  we need to find the term in the position n in the sequence 12345678910111213...
  */