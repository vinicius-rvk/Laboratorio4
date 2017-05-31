#include "alado.h"
using namespace std;

Alado::Alado():Monstro(){}
Alado::Alado(int vida, 
				int forca, 
				int espirito, 
				int vitalidade, 
				int agilidade)
					:
					Mostro(forca, espirito, vitalidade),
					agilidade(agilidade)
					{}

int Alado::getAgilidade(){return this->agilidade;}

void Alado::setAgilidade(int agilidade){this->agilidade = agilidade;}

//friend ostream& operator<<(ostream&, Alado&);

//friend istream& operator>>(istream&, Alado&);
