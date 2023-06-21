// #include <conio.h>
#include <iostream>
using namespace std;
  
// defining a class template
template <class T> class info {
public:
    info(T A) // constructor of type template
    {
        cout << "\n"
             << "A = " << A
             << " size of data in bytes:" << sizeof(A);
    } // end of info()
}; // end of class
  
// Main Function
int main()
{
    // clrscr();
  
    // passing character value by creating an objects
    info<char> p('x');
  
    // passing integer value by creating an object
    info<int> q(22);
  
    // passing float value by creating an object
    info<float> r(2.25);
  
    return 0;
} // end of Main Function
