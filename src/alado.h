#ifndef _ALADO_HPP_
#define _ALADO_HPP_

#include <iostream>
#include "monstro.h"

using namespace std;

class Alado: public Monstro{
private:
	int agilidade;
public:
	Alado();
	Alado(int, int, int, int, int);

	int getAgilidade();

	void setAgilidade(int);

	//friend ostream& operator<<(ostream&, Alado&);

	//friend istream& operator>>(istream&, Alado&);

};

#endif //_ALADO_HPP_