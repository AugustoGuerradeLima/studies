#include <iostream>
#include "complexo.hpp"

using namespace std;

Complexo::Complexo(int real, int img) {
  this->real = real;
  this->img = img;
}

Complexo Complexo::operator + (Complexo &num) {
  return Complexo((this->real + num.real), (this->img + num.img));
}

int Complexo::getReal() {
	return this->real;
}

int Complexo::getImg() {
	return this->img;
}

void Complexo::setReal(int real) {
	this->real = real;
}

void Complexo::setImg(int img) {
	this->img = img;
}

void operator<<(ostream& os, Complexo& numero) {
  cout << "R: " << numero.getReal() << " || I: " <<  numero.getImg() << endl;
}
