#ifndef _BESTAS_HPP_
#define _BESTAS_HPP_

#include "monstro.h"

using namespace std;

class Besta: public Monstro{
private:
	string nome;
	int furia;
public:
	Besta();
	Besta(vector& palavras);
	Besta(int, int, int, int, string, int);

	string getNome();
	int getFuria();

	void setNome(string);
	void setFuria(int);

	//friend ostream& operator<<(ostream&, Besta&);

	//friend istream& operator>>(istream&, Besta&);

};

#endif //_BESTAS_HPP_