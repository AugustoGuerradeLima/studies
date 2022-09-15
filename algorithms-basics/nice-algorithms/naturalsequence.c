#include <stdio.h>
int f1(int n)
{ // data
    int nalg = 1;
    int result = 0;
    int mult = 0;
    int base = 9;
    int resultsaver = 0; // filter for specific cases

    while (result < n)
    {
         resultsaver = result;
        mult = base * nalg;
        result = result + mult;
        base = base * 10;
        nalg++;
    } // end while()
    return (resultsaver);
} // end f1()
int main()
{ // data
    int n = 0;
    int sum = 0;
    int digits = 0;
    scanf("%d", &n);

    sum = f1(n); // how many digits cover (absolute)

    digits = n - sum;

    printf("%d", digits);

    // return
    return (0);
} // end main()
  /*
  we need to find the term in the position n in the sequence 12345678910111213...
  */