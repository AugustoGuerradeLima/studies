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
    int swap;
    swap = array.at(array.size()-1);
    for(int j = 0; j<r; j++){
        for(int i=array.size()-1;i>0;i--){
            array.at(i) = array.at(i-1);
        }
        array.at(0)=swap;
    }
}

void print(vector<int>&array){
    for(int i:array)cout<<i<<" ";
}

#endif
