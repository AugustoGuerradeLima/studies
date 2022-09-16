/*
lista 3 - augusto guerra de lima 2022101086
engenharia de sistemas
*/
#include <stdio.h>
//---------------------------------------------------------------------------q1
float max(float a, float b, float c)
{
    if (a > b && a > c)
    {
        return (a);
    }
    else
    {
        if (b > c)
        {
            return (b);
        }
        else
        {
            return (c);
        }
    }
} // end max()
float min(float a, float b, float c)
{
    if (a < b && a < c)
    {
        return (a);
    }
    else
    {
        if (b < c)
        {
            return (b);
        }
        else
        {
            return (c);
        }
    }
} // end max()
void f1(void)
{
    float a, b, c;
    float nmax, nmin;
    scanf("%f%f%f", &a, &b, &c);
    nmax = max(a, b, c);
    nmin = min(a, b, c);
    printf("\n%f is the biggest number.\n", nmax);
    printf("\n%f is the smallest number.\n", nmin);
} // end f1()
//---------------------------------------------------------------------------q2
void even(int number)
{
    if (number % 2 == 0)
    {
        printf("\neven.\n");
    }
    else
    {
        printf("\nodd.\n");
    }
} // end even()
void range(int number)
{
    float max, min;
    printf("\nmax number of range:\n");
    scanf("%f", &max);
    printf("\nmin number of range:\n");
    scanf("%f", &min);
    if (min > max) // filter
    {
        printf("ERROR - check the maximum and minimum values.");
    }
    else
    {
        if ((float)number > min && (float)number < max)
        {
            printf("\nthe number is within the range.\n");
        }
        else
        {
            printf("\nthe number does not belong to the range.\n");
        }
    }
} // end range()
void f2(void)
{
    int c = 0;
    int number = 0;
    printf("\n1 - even?\n2 - in range?\n3 - outside range?\n");
    scanf("%d", &c);
    printf("\nnumber:\n");
    scanf("%d", &number);
    switch (c)
    {
    case 1:
        even(number);
        break;
    case 2:
        range(number);
        break;
    case 3:
        range(number);
        break;
    default:
        printf("ERROR - put a valid option next time.");
        break;
    }
} // end f2()
//---------------------------------------------------------------------------q3
void leapBissextile(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    {
        printf("\nthis is a leap year.\n");
    }
    else
    {
        printf("\nthis isn't a leap year.\n");
    }
} // end leapBissextile()
void f3(void)
{
    int year = 0;
    printf("\nchoose a year:\n");
    scanf("%d", &year);
    leapBissextile(year);
} // end f3()
//-------------------------------------------------------------------------main
int main(void)
{
    int c = 0;
    printf("augusto guerra de lima 2022101086\n");
    // menu
    do
    {
        printf("\n0 - stop  1 - q1\n2 - q2    3 - q3\n");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            break;
        case 1:
            f1();
            break;
        case 2:
            f2();
            break;
        case 3:
            f3();
            break;
        default:
            printf("\nERROR - value not found :(\n");
            break;
        }
    } while (c != 0);
    return (0);
} // end main()