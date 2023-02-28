//Augusto Guerra de Lima UFMG pds2
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string palavra;
    int contador[50]={};
    cin>>palavra;

    for(char caractere : palavra)
    {
        contador[caractere -'a']++;
    }

    for(int i = 0;i<50;i++)
    {
        if(contador[i]>0)
        {
            cout<<(char)('a'+i)<<" "<<contador[i]<<endl;
        }
    }

    return (0);
}