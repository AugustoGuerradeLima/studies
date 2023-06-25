/*
O matematico Leibniz calculou uma serie para aproximar pi
Σ(-1)^n/(2n+1)
Essa serie converge lentamente para π/4
*/

#include <iostream>
#include <cmath>
using namespace std;

double leibniz(int n){
    double result = 0.0;

    for(int i = 0; i<n ; i++)result += ((double)pow((-1),i))/((double)(2*i+1));

    return result;
}

int main(){
    int n;

    cin>>n;

    cout<<4*leibniz(n)<<endl;

    return 0;
}