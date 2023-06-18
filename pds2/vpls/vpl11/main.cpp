#include <iostream>     
#include <vector>       
#include "array.hpp"
using namespace std;

int main(){
  int r;
  cin >> r;
  vector<int> array;
  read(array);
  rotate(array, r);
  print(array);
  return 0;   
}