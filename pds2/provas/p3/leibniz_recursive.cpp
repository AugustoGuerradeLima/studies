/*
O matematico Leibniz calculou uma serie para aproximar pi
Σ(-1)^n/(2n+1)
Essa serie converge lentamente para π/4
*/

#include <iostream>
#include <cmath>
using namespace std;

double leibniz_recursive(int n, int i, double serie){
    if(i>=n)return serie;

    double formula = ((double)pow((-1),i))/((double)(2*i+1));

    return leibniz_recursive(n, i+1, serie + formula);
}

int main(){
    int n;

    cin>>n;

    cout<<4*leibniz_recursive(n,0,0)<<endl;

    return 0;
}