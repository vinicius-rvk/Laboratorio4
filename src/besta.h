#ifndef _BESTAS_HPP_
#define _BESTAS_HPP_

#include <iostream>
#include "monstro.h"

using namespace std;

class Besta: public Monstro{
private:
	int furia;
public:
	Besta();
	Besta(int, int, int, int, int);

	int getFuria();

	void setFuria(int);

	//friend ostream& operator<<(ostream&, Besta&);

	//friend istream& operator>>(istream&, Besta&);

};

#endif //_BESTAS_HPP_