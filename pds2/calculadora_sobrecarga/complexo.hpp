#ifndef _CALC_HPP
#define _CALC_HPP
#include <iostream>

using namespace std;

class Complexo {
	private:
		int real;
		int img;

	public:
		Complexo(int real, int img);

		int getReal();
		int getImg();

		void setReal(int real);
		void setImg(int img);

		Complexo operator + (Complexo &num);
};

void operator<<(ostream& os, Complexo& numero);
#endif
