#ifndef _MAGICO_HPP_
#define _MAGICO_HPP_

#include "monstro.h"

using namespace std;

class Magico: public Monstro
{
private:
	string nome
	int magic_point;
public:
	Magico();
	Magico(vector& palavras);
	Magico(int, int, int, int, int);

	string getNome();
	int getMagic_point();

	void setNome(string );
	void setMagic_point(int);

	//friend ostream& operator<<(ostream&, Magico&);

	//friend istream& operator>>(istream&, Magico&);
	
};

#endif // _MAGICO_HPP_