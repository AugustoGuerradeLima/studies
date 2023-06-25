/*
O matematico Nilakantha calculou uma serie para aproximar pi
Σ(-1)^n/((2n+2)(2n+3)(2n+4))
Essa serie converge rapidamente para (π-3)/4
*/

#include <iostream>
#include <cmath>
using namespace std;

double nilakantha(int n){
    double result = 0.0;

    for(int i = 0; i<n ; i++)result += ((double)pow((-1),i))/((double)((2*i+2)*(2*i+3)*(2*i+4)));

    return result;
}

int main(){
    int n;

    cin>>n;

    cout<<3+4*nilakantha(n)<<endl;

    return 0;
}
