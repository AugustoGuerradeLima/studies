#ifndef _ARRAY_CPP_
#define _ARRAY_CPP_
#include <iostream>     
#include <vector>       
#include "array.hpp"

void read(vector<int>&array){
    int i;
    while(cin>>i)array.push_back(i);
}

void rotate(vector<int>&array, int r){
    
}

void print(vector<int>&array){
    for(int i:array)cout<<i<<" ";
}

#endif