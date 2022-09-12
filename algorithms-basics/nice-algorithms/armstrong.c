#include <stdio.h>

/*
f1 - find how many digits are there in number
*/
int findNumberOfDigits(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count = count + 1;
    } // end while

    return (count);
} // end numberOfDigits

int main()
{
    // data
    int number = 0;
    int digits = 0; // number of digits
    printf("number: ");
    scanf("%d", &number); // write and read

    digits = findNumberOfDigits(number);

    return (0);
} // end main()