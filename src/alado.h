#ifndef _ALADO_HPP_
#define _ALADO_HPP_

#include "monstro.h"

using namespace std;

class Alado: public Monstro{
private:
	string nome;
	int agilidade;
public:
	Alado();
	Alado(vector& palavras);
	Alado(int, int, int, int, string, int);
	
	string getNome();
	int getAgilidade();

	void setNome(string );
	void setAgilidade(int);

	//friend ostream& operator<<(ostream&, Alado&);

	//friend istream& operator>>(istream&, Alado&);

};

#endif //_ALADO_HPP_