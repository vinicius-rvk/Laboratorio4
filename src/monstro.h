#ifndef _MONSTROS_HPP_
#define _MONSTROS_HPP_

#include <iostream>

using namespace std;

class MoNstro{
private: 
	int vida,
		forca,
		espirito,
		vitalidade;
public:
	Monstro();
	Monstro(int, int, int, int);

	//int GETTERS
	int getVida();
	int getForca();
	int getEspirito();
	int getVitalidade();

	//void SETTERS
	void setVida();
	void setForca();
	void setEspirito();
	void setVitalidade();

	//SOBRECARGA DE OPERADORES
	friend ostream& operator<<(ostream&, Monstro&);

	friend istream& operator>>(istream&, Monstro&);

};