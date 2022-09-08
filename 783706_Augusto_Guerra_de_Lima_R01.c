/*783706 - Augusto Guerra de Lima - 11/05/2022 - R01*/
//
//--------------------------------------------------------------------------01
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>//dependencies
/*
method01 - number of dividers
@value - n - amount
@value - x - value to test
@value - d - auxiliary
*/
void method01( )
{
    int n = 0;
    int x = 0;
    int d = 0;//data
    printf("\nmethod01\n");//id
    printf("amount: \n");
    scanf("%d", &n);
    //repeat
    while(n>0)
    {
        printf("\nvalue: \n");
        scanf("%d", &x);
        printf("\ndividers:\n");
        for(d=1;d<=x;d++)
        {
            if(x%d == 0)
            {
                printf("%d\n",d);
            }
        }
        n--;
    }//end while
}//end method01( )
//
//--------------------------------------------------------------------------02
//
/*
method02 - prime numbers 
@value - n - amount
@value - x - value to test
@value - count_primes - number of prime numbers
@value - count - count auxiliary
@value - d - auxiliary
*/
void method02( )
{   
    int d            = 0;
    int count_primes = 0;
    int count        = 0;
    int n            = 0;
    int x            = 0;//data
    printf("\nmethod02\n");//id
    printf("amount: \n");
    scanf("%d", &n);
    //repeat
    while(n>0)
    {
        printf("\nvalue: ");
        scanf("%d", &x);//read
        for(d=1;d<=x;d++)
        {
            if(x%d == 0)
            {
                count++;//u = u+1
            }//end if
        }
            if( count == 2)//prime
            {
                printf("%d is a prime number\n", x);
                count_primes++;//u = u+1
            }
            else//not prime
            {
                printf("%d isnt a prime number\n", x);
            }//end if
        n--;
        count = 0;//setup values
    }//end while
    printf("\namount of prime numbers = %d\n", count_primes);
}//end method02( )
//
//--------------------------------------------------------------------------03
//
/*
@string - word - getword
@value - len - strlen
@value - x - auxiliary counter
*/
void method03( )
{
    char word [80];
    int len = 0;
    int x = 0;//data
    printf("\nmethod03\n");//id
    printf("word or symbols: \n");
    scanf("%s",word);//read
    len = strlen(word);
    for(x=0;x<len;x++)
    {

    if((word[x]=='&'|| word[x]=='|' || word[x]=='!')
        || (word[x]== '+' || word[x]=='-' ||  word[x]=='*' || word[x]== '/' ||  word[x]=='%')
        || (word[x]=='>' || word[x]=='<' || word[x]=='=') 
        || ('a'<=word[x] && word[x]<='z')|| ('A'<=word[x] && word[x]<='Z') 
        || ('0'<= word[x] && word[x]<= '9')
        ||(word[x] == '.' || word[x] == ';' || word[x] == ':' || word[x] == ',' || word[x] == '_' || (int)word[x]==32))//any symbol requested
        {
                if(word[x]=='&'|| word[x]=='|' ||  word[x]=='!')//booleans
                {
                        printf("[%c] is a boolean operator\n", word[x]);
                }//end if booleans
                if(word[x]== '+' || word[x]=='-' ||  word[x]=='*' || word[x]== '/' ||  word[x]=='%')//arithmetic
                    {
                        printf("[%c] is an arithmetic operator\n", word[x]);
                    }//end if arithmetic
                if(word[x]=='>' || word[x]=='<' || word[x]=='=')//relational
                {
                        printf("[%c] is a relation operator\n", word[x]);
                }//end if relational
                if(word[x] == '.' || word[x] == ';' || word[x] == ':' || word[x] == ',' || word[x] == '_' || (int)word[x]==32)//separators
                {
                        printf("[%c] is a separator operator\n", word[x]);
                }//end if separators
                if(('a'<=word[x] && word[x]<='z')|| ('A'<=word[x] && word[x]<='Z'))//letters
                {
                        printf("[%c] is a letter\n", word[x]);
                }//end if letters
                if(('0'<= word[x] && word[x]<= '9'))//numbers
                {
                        printf("[%c] is a number\n", word[x] );
                }//end if numbers
        }
        else//other symbols
        {
                printf("[%c] is an other symbol\n", word[x]);
        }//end if main
    }//end for
    getchar( );//finish
}//end method03
//
//--------------------------------------------------------------------------04
//
/*
@string - word - getword
@value - len - strlen
@value - x - auxiliary counter
@value - bcounter - count booleans
@value - acounter - count arithmetic
@value - rcounter - count relational
@value - dcounter - count separators
@value - lcounter - count letters
@value - ncounter - count numbers
@value - ocounter - count other symbols
*/
void method04( )
{
    char word [80];
    int len      = 0;
    int x        = 0;
    int mcounter = 0;
    int Mcounter = 0;
    int bcounter = 0;
    int acounter = 0;
    int rcounter = 0;
    int dcounter = 0;
    int lcounter = 0;
    int ncounter = 0;
    int ocounter = 0;//data
    printf("\nmethod04\n");//id
    printf("word or symbols: \n");
    scanf("%s",word);//read
    len = strlen(word);
    for(x=0;x<len;x++)//repeat
    {

    if((word[x]=='&'|| word[x]=='|' || word[x]=='!')
        || (word[x]== '+' || word[x]=='-' ||  word[x]=='*' || word[x]== '/' ||  word[x]=='%')
        || (word[x]=='>' || word[x]=='<' || word[x]=='=') 
        || ('a'<=word[x] && word[x]<='z')|| ('A'<=word[x] && word[x]<='Z') 
        || ('0'<= word[x] && word[x]<= '9')
        ||(word[x] == '.' || word[x] == ';' || word[x] == ':' || word[x] == ',' || word[x] == '_' || (int)word[x]==32))//any symbol requested
        {
                if(word[x]=='&'|| word[x]=='|' ||  word[x]=='!')//booleans
                {
                        printf("[%c] is a boolean operator\n", word[x]);
                        bcounter++;
                }//end if booleans
                if(word[x]== '+' || word[x]=='-' ||  word[x]=='*' || word[x]== '/' ||  word[x]=='%')//arithmetic
                    {
                        printf("[%c] is an arithmetic operator\n", word[x]);
                        acounter++;
                    }//end if arithmetic
                if(word[x]=='>' || word[x]=='<' || word[x]=='=')//relational
                {
                        printf("[%c] is a relational operator\n", word[x]);
                        rcounter++;
                }//end if relational
                if(word[x] == '.' || word[x] == ';' || word[x] == ':' || word[x] == ',' || word[x] == '_' || (int)word[x]==32)//separators
                {
                        printf("[%c] is a separator operator\n", word[x]);
                        dcounter++;
                }//end if separators
                if('a'<=word[x] && word[x]<='z')//letters_m
                {
                        printf("[%c] is a letter\n", word[x]);
                        lcounter++;
                        mcounter++;
                }//end if letters_m
                if('A'<=word[x] && word[x]<='Z')//letters_M
                {
                        printf("[%c] is a letter\n", word[x]);
                        lcounter++;
                        Mcounter++;
                }//end if letters_M
                if(('0'<= word[x] && word[x]<= '9'))//numbers
                {
                        printf("[%c] is a number\n", word[x] );
                        ncounter++;
                }//end if numbers
        }
        else//other symbols
        {
                printf("[%c] is an other symbol\n", word[x]);
        }//end if main
    }//end for
        //write vallues
        printf("number of bolleans:          %d\n", bcounter);
        printf("number of arithmetic:        %d\n", acounter);
        printf("number of relational:        %d\n", rcounter);
        printf("number of separators:        %d\n", dcounter);
        printf("number of letters:           %d\n", lcounter);
        printf("number of lowercase letters: %d\n", mcounter);
        printf("number of uppercase letters: %d\n", Mcounter);
        printf("number of numbers:           %d\n", ncounter);
        printf("number of other symbols:     %d\n", ocounter);
        getchar( );//finish
}//end method04
//
//--------------------------------------------------------------------------05
//
/*
method05
@value n - amount
@value x - value to test
@values soma1 - soma2 - soma3 - sum
@values d1 - d2 - d3 - dividers
@values av1 - av2 - av3 - avarages
*/
void method05( )
{
    int n         = 0;
    float x     = 0.0;
    float soma1 = 0.0;
    float soma2 = 0.0;
    float soma3 = 0.0;
    float d1    = 0.0;
    float d2    = 0.0;
    float d3    = 0.0;
    float av1   = 0.0;
    float av2   = 0.0;
    float av3   = 0.0;//data
    printf("\nmethod05\n");
    printf("amount: \n");
    scanf("%d",&n);
    while(n>0)
    {   
        printf("value: \n");
        scanf("%f", &x);//read
        if(x < -23.75)//values < -23.75
        {
            soma1 = soma1 + x;
            d1++;
        }
        if(-23.75<= x && x<= 65.25)//values inside -23.75 & 65.25
        {
            soma2 = soma2 + x;
            d2++;
        }
        if(65.25<x)
        {
            soma3 = soma3 + x;
            d3++;
        }
        x = 0.0;
        n--;//setup values
    }
    if(d1==0)//cant divide by 0.0, set divider 1.0
    {
        d1 = 1.0;
    }
    if(d2==0)//cant divide by 0.0, set divider 1.0
    {
        d2 = 1.0;
    }
    if(d3==0)//cant divide by 0.0, set divider 1.0
    {
        d3 = 1.0;
    }
    av1 = soma1/d1;
    av2 = soma2/d2;
    av3 = soma3/d3;//set avarages
    printf("avarage x<-23.75                = %f\n", av1);
    printf("avarage x inside -23.75 & 65.25 = %f\n", av2);
    printf("avarage x>65.25                 = %f\n", av3);//show avarages
    if(av1 > av2 && av1 > av3)
    {
        printf("avarage x<-23.75 is the biggest = %f\n",av1);
    }
    if(av2 > av1 && av2 > av3)
    {
        printf("avarage x inside -23.75 & 65.25 is the biggest = %f\n",av2);
    }
    if(av3 > av1 && av3 > av2)
    {
        printf("\n\navarage x>65.25 is the biggest = %f\n",av3);
    }
    getchar( );//finish
}
//
//--------------------------------------------------------------------------06
//
/*
method06
@value a - interval point
@value b - interval point
@value n - values
@value x - sum
*/
void method06( )
{
    int a   = 0;
    int b   = 0;
    int n   = 0;
    float x = 0;//data
    printf("set a interval point: \n");
    scanf("%d", &a);
    printf("set other interval point: \n");
    scanf("%d", &b);//read interval
    while(n!= -1)//stop in n = -1
    {
        printf("value: \n");
        scanf("%d", &n);//read
        if(((float)a<n && n<(float)b) || ((float)b<n && n<(float)b))//is n in the interval
        {
        if(n%2 != 0)//if odd
        {
            x = x + (float)(1.0 / (n*n*n));//sum of the cube of the inverse of the odds
        }//end if is odd
        }//end if interval
    }//end while
    printf("the sum of the inverses of the cubes of the odd values\n within the interval is equal to %f\n", x);
    getchar( );//finish
}//end method06( )
//
//--------------------------------------------------------------------------07
//

/*
method07
@value - a, b (interval), value (analyzed value)
@value - inside, outside (counter), control (count elements)
@value - por (calculate porcentage) 
*/

void method07 () {
    double a        = 0.0;
    double b        = 0.0;
    double value    = 0.0;
    double inside   = 0.0;
    double outside  = 0.0;
    double control  = 0.0;
    double por      = 0.0;//data
    printf("\nmethod07"); //

    printf("set the first interval poinr: \n");//read first interval
    scanf("%lf", &a);
    do
    {
        printf("set the second interval point: \n");//read second interval
        scanf("%lf", &b);
    } 
    while (a > b);//set correct interval

    printf ("value: ");
    scanf ("%lf", &value);
    control = 1;

        //calcular
    while (value != 0)
    {
        if (value > a && value < b) //if it the is inside the interval
        { 
            inside++; 
        }
    
        else  // the value is outside the interval
        { 
            outside++;   
        } //end interval analysis

        printf ("value: ");
        scanf ("%lf", &value);
        control += 1;
    }//end while
    por = ((outside * 100.0)/ control); //percentage outside 

    printf("\n the percentage of the values outside the interval is: %lf", por);  
    printf("\n the amount of values inside the interval is:  %lf", inside);  
    printf("\n the amount of values outside the interval id: %lf\n", outside); //results 
    
    getchar(); // finish
} // end method07
//
//--------------------------------------------------------------------------08
//

/*
 Method08
 @value x - first value
 @value y - second value
 @value z - third value
*/

void method08 () {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;//data
    printf("\nmethod08");
    printf("\nvalue [1]: ");
    scanf ("%lf", &x);
    printf("\nvalue [2]: ");
    scanf ("%lf", &y);
    printf("\nvalue [3]: ");
    scanf ("%lf", &z);
    if ((x < y) && (y < z)) 
    {
        printf("\nincreasing order\n");
    } //increasing
    else if ((x > y) && (y > z)) 
    {
        printf("\ndescending order\n");
    } //descending
    else //mixed
    {
        printf("\nit isn't increasing neither descending the order\n");
        if (x > y && x > z)// x bigger
        {
            printf("\nX (%lf) is the biggest number", x);
            if (y > z) // z smaller
            {
                printf("\nZ (%lf) is the smallest number", z);
            }//end z smaller      
            else // y smaller
            {
                printf("\nY (%lf) is the smallest number", y);
            }//end y smaller
        }//end X bigger
        else if (y > x && y > z)// y bigger
        {
            printf("\nY (%lf) is the biggest number", y);
            if (x > z) // z smaller
            {
                printf("\nZ (%lf) is the smallest number", z);
            }//end z smaller       
            else  // x smaller
            {
                printf("\nX (%lf) is the smallest number", x);
            }//end x smaller 
        }//end Y bigger
        else// z bigger
        {
            printf("\nZ (%lf) is the biggest number", z);
            if (y > x) // x smaller
            {
                printf("\nX (%lf) is the smallest number", x);
            }//end x smaller       
            else // y smaller
            {
                printf("\nY (%lf) is the smallest number", y);
            }//end y smaller  
        }//end Z bigger
    }//end mixed
    getchar(); // finish
} // end method08
//
//--------------------------------------------------------------------------09
//

/*
 Method09
 @value x, y, z- strings the user decided to use
*/

void method09 () {
    char x;
    char y;
    char z;//data
    printf("\nmethod09");
    printf("\nenter with a string [1]: ");
    scanf ("%s", &x);
    printf("\nenter with a string [2]: ");
    scanf ("%s", &y);
    printf("\nenter with a string [3]: ");
    scanf ("%s", &z);//read
    if (((int)x) < ((int)y) && ((int)y) < ((int)z)) //increasin
    {
        printf("\nordem crescente\n");
    }//end increasing
    else if (((int)z) > ((int)y) && ((int)y) > ((int)x)) //descending
    {
        printf("\nordem decrescente\n");
    }//end descending
    else 
    {
        printf("\nnao esta na ordem crecente ou decrescente\n");//mixed
    }//end mixed   
    getchar();
} // fim method09

//
//--------------------------------------------------------------------------10
//

void values(char string[])
{
    //RECURSIVIDADE PARA DEFINIR OS values DAS stringS
    int i = 0;
    printf("escreva a da string: ");
    scanf("%s",string);
    getchar();
    for (i = 0; i < 3; i++)
    {
        if(!((string[i]>='a' && string[i]<='z')||(string[i]>='A' && string[i]<='Z')))
        {
        printf("\n----DIGITO INVALIDO----\n");
        strcpy(string,"");
        values(string);
        }
    }
}
void order(char string1[],char string2[],char string3[])
{
    //---------------------ORDENACAO DA string
    int o = 0;
    int j = 0;
    int t = 0;
    int i = 0;
    
    //string1
    
    if(string1[0]>string1[1] && string1[1]>string1[2])
    {
        printf("\nA string1 e decrescente.");
    }
    else
    {
        if(string1[0]<string1[1] && string1[1]<string1[2])
        {
            printf("\nA string1 e crescente."); 
            o = 1;
        }
        else
        {
            printf("\nA string1 nao esta em order.");
        }
    }
    //string2
    if(string2[0]>string2[1] && string2[1]>string2[2])
    {
        printf("\nA string2 e decrescente.");
    }
    else
    {
        if(string2[0]<string2[1] && string2[1]<string2[2])
        {
            printf("\nA string2 e crescente."); 
            j = 1;
        }
        else
        {
            printf("\nA string2 nao esta em order.");
        }
    }
    //string3
    if(string3[0]>string3[1] && string3[1]>string3[2])
    {
        printf("\nA string3 e decrescente.");
    }
    else
    {
        if(string3[0]<string3[1] && string3[1]<string3[2])
        {
            printf("\nA string3 e crescente."); 
            t = 1;
        }
        else
        {
            printf("\nA string3 nao esta em order.");
        }
    }
    //---------------------------COMPARAR AS stringS
    //string 1 e 2
    if((o && j) == 1)
    {
        if(strcmp(string1,string2) != 0)
        {
            printf("\nAs strings 1 e 2 sao diferentes");
            if(string1[0]>string2[0])
            {
                printf("\ne a string 1 sucede a 2");
            }
            if(string1[0]<string2[0])
            {
                printf("\ne a string 1 precede a 2");
            }
        }
        else
        {
            printf("\nAs strings 1 e 2 sao iguais");
        }
    }
    //string 1 e 3
    if((o && t) == 1)
    {
        if(strcmp(string1,string3) != 0)
        {
            printf("\nAs strings 1 e 3 sao diferentes");
            if(string1[0]>string3[0])
            {
                printf("\ne a string 1 sucede a 3");
            }
            if(string1[0]<string3[0])
            {
                printf("\ne a string 1 precede a 3");
            }
        }
        else
        {
            printf("\nAs strings 1 e 3 sao iguais");
        }
    }
    
    //string 2 e 3
    if((j && t) == 1)
    {
        if(strcmp(string2,string3) != 0)
        {
            printf("\nAs strings 2 e 3 sao diferentes");
            if(string2[0]>string3[0])
            {
                printf("\ne a string 2 sucede a 3");
            }
            if(string2[0]<string3[0])
            {
                printf("\ne a string 2 precede a 3");
            }
        }
        else
        {
            printf("\nAs strings 2 e 3 sao iguais");
        }
    }    
}
void metodo10()
{
    char string1[3];
    char string2[3];
    char string3[3];//data
    strcpy(string1, "");
    strcpy(string2, "");
    strcpy(string3, "");
    //defineValues
    values(string1);
    values(string2);
    values(string3);
    //order
    order( string1, string2, string3);
}


int main( )
{
    int choice = 0;//data
    printf("783706_Augusto_Guerra_de_Lima - R01 - v.0.0\n");
    do
    {   
        printf("________________________________________________________________\n");
        printf("\n|                     ::::OPTIONS::::                           |\n");
        printf("|0 - close                                                      |\n");
        printf("|1 - number of dividers             2 - is or isnt a prime      |\n");
        printf("|3 - symbol type                    4 - symbol type counter     |\n");
        printf("|5 - average of values              6 - number decrease         |\n");
        printf("|7 - read values up to 0            8 - order of values         |\n");
        printf("|9 - order of values alternative    10 - word order             |\n");
        printf("________________________________________________________________|\n");
        scanf("%d", &choice);//read
        switch(choice)
        {   //compair choice
            case 0: break;
            case 1: method01( ); break;
            case 2: method02( ); break;
            case 3: method03( ); break;
            case 4: method04( ); break;
            case 5: method05( ); break;
            case 6: method06( ); break;
            case 7: method07( ); break;            
            case 8: method08( ); break;
            case 9: method09( ); break;
            case 10: method010( ); break;
            default: printf("ERROR - invalid value\n");break;
        }//end switchcase
    }
    while(choice!=0);//end dowhile

    return(0);
}//end main( )
/*
testes
method01 - OK
method02 - OK
method03 - OK
method04 - OK
method05 - OK
method06 - OK
method07 - OK
method08 - OK
method09 - OK
method10 - OK
*/