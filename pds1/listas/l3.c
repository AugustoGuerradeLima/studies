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
//---------------------------------------------------------------------------q3
//-------------------------------------------------------------------------main
int main(void)
{
    int c = 0;
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
        /*case 2:
            f2();
            break;
        case 3:
            f3();
            break;*/
        default:
            printf("\nvalue not found :(\n");
            break;
        }
    } while (c != 0);
    return (0);
} // end main()