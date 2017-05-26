#ifndef _MOSTROS_HPP_
#define _MOSTROS_HPP_

#include <iostream>

using namespace std;

class Mostro{
private: 
	int vida,
		forca,
		espirito,
		vitalidade;
public:
	Mostro();
	Mostro(int, int, int, int);

	//GETTERS
	getVida();
	getForca();
	getEspirito();
	getVitalidade();

	//SETTERS
	setVida();
	setForca();
	setEspirito();
	setVitalidade();

	//SOBRECARGA DE OPERADORES
	friend ostream& operator<<(ostream&, Mostro&);

	friend istream& operator>>(istream&, Mostro&);

};