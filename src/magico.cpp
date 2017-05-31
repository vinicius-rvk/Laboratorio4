#include "magico.h"

using namespace std;

Magico::Magico():Monstro(){}
Magico::Magico(int vida,
				int forca, 
				int espirito, 
				int vitalidade, 
				int agilidadde):
					Magico(forca, espirito, vitalidade),
					agilidade(agilidade)
					{}

int Besta::getAgilidade(){return this->agilidade;}

void Besta::setAgilidade(int agilidade){this->agilidade = agilidade;}

//friend ostream& operator<<(ostream&, Magico&);

//friend istream& operator>>(istream&, Magico&);
