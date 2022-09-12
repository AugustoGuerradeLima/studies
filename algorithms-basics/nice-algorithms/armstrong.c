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
} // end numberOfDigits()

/*
f2 - multiply each digit n times and add them
*/
int armstrongCalculator(int x, int count)
{
    int auxcount = count; // auxiliar count
    int resto = 0;
    int mult = 1;
    int result = 0; // data

    while (x != 0)
    {
        resto = x % 10;
        while (auxcount != 0)
        {
            mult = mult * resto;
            auxcount = auxcount - 1;
        } // end while()
        result = result + mult;
        auxcount = count;
        x = x / 10;
        mult = 1;
    } // end while()

    return (result);
} // end armstrongCalculator()

/*
f3 - compare number and armstrong
*/
void armstrongCmp(int x, int a)
{
    if (x == a)
    {
        printf("\n%d is an armstrong number!", x);
    }
    else
    {
        printf("\n%d is not an armstrong number!", x);
    }
} // end armstrongCmp()

int main()
{
    // data
    int number = 0;
    int digits = 0; // number of digits
    int armstrong = 0;
    printf("number: ");
    scanf("%d", &number); // write and read

    digits = findNumberOfDigits(number);

    armstrong = armstrongCalculator(number, digits);

    printf("\nnumber: %d\tarmstrong: %d\n", number, armstrong);

    armstrongCmp(number, armstrong);

    return (0);
} // end main()
