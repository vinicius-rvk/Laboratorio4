#ifndef _MONSTROS_H_
#define _MONSTROS_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Monstro{
private: 
	string nome;
	int vida,
		forca,
		espirito,
		vitalidade;
public:
	Monstro();
	Monstro(vector& palavras);
	Monstro(int vida, int forca, int espirito, int vitalidade);

	//int GETTERS
	string getNome();
	int getVida();
	int getForca();
	int getEspirito();
	int getVitalidade();

	//void SETTERS
	void setNome(string );
	void setVida(int);
	void setForca(int);
	void setEspirito(int);
	void setVitalidade(int);

	//SOBRECARGA DE OPERADORES
	//friend ostream& operator<<(ostream&, Monstro&);

	//friend istream& operator>>(istream&, Monstro&);

};

#endif //_MONSTROS_HPP_