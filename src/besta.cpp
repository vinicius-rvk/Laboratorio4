#include "besta.h"
using namespace std;

Besta::Besta():Monstro(){}
Besta::Besta(int vida, 
				int forca, 
				int espirito, 
				int vitalidade, 
				int furia):
					Monstro(vida, forca, espirito, vitalidade),
					furia(furia)
					{}

int Besta::getFuria(){return this->furia;}

void Besta::setFuria(int furia){this->furia = furia;}

//friend ostream& operator<<(ostream&, Magico&);

//friend istream& operator>>(istream&, Magico&);
