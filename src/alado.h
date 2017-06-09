#ifndef _ALADO_HPP_
#define _ALADO_HPP_

#include "monstro.h"

using namespace std;

template <typename T>
class Alado: public Monstro{
private:
	string nome;
	int agilidade;
	T* next;
	T* previous;
public:
	Alado();
	Alado(vector& palavras);
	Alado(int, int, int, int, string, int);
	
	string getNome();
	int getAgilidade();
	T* getNext();
	T* getPrevious();

	void setNome(string );
	void setAgilidade(int);
	void setNext();
	void setPrevious();
	//friend ostream& operator<<(ostream&, Alado&);

	//friend istream& operator>>(istream&, Alado&);

};

#endif //_ALADO_HPP_