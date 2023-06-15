/*
O matematico Nilakantha calculou uma serie para aproximar pi
Σ(-1)^n/((2n+2)(2n+3)(2n+4))
Essa serie converge rapidamente para (π-3)/4
*/

#include <iostream>
#include <cmath>
using namespace std;

double nilakantha_recursive(int n, int i, double serie){
    if(i>=n)return serie;

    double formula = ((double)pow((-1),i))/((double)((2*i+2)*(2*i+3)*(2*i+4)));

    return nilakantha_recursive(n, i+1, serie+formula);
}

int main(){
    int n;

    cin>>n;

    cout<<3+4*nilakantha_recursive(n,0,0)<<endl;

    return 0;
}
