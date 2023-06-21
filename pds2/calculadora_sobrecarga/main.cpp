#include <iostream>
#include "complexo.hpp"
#include "complexo.hpp"

using namespace std;

int main() {
	Complexo n1(2,5);
	Complexo n2(3,6);
	cout << n1;
	cout << n2;
	Complexo n3 = n1 + n2;
	cout << n1;
	cout << n2;
	cout << n3;
	return 0;
}
