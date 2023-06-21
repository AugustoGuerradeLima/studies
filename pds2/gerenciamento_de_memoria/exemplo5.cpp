#include <iostream>
using namespace std;
  
template <class T, class U = char> class A {
public:
    T x;
    U y;
    A() { cout << "Constructor Called" << endl; }
};
  
int main()
{
    A<char> a;        // This will call A<char, char>
    A<int, double> b; // This will call A<int, double>
    A<int> c;         // This will call A<int, char>
    return 0;
}
