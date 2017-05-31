#ifndef _MAGICO_HPP_
#define _MAGICO_HPP_

#include "mostro.h"

using namespace std;

class Magico: public Monstro
{
private:
	int agilidade;
public:
	Magico();
	Magico(int, int, int, int, int);

	int getAgilidade();

	void setAgilidade(int);

	//friend ostream& operator<<(ostream&, Magico&);

	//friend istream& operator>>(istream&, Magico&);
	
};

#endif // _MAGICO_HPP_