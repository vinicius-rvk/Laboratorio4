#include "magico.h"

using namespace std;

Magico::Magico():Monstro(){}
Magico::Magico(int vida,
				int forca, 
				int espirito, 
				int vitalidade, 
				int magic_point):
					Magico(forca, espirito, vitalidade),
					magic_point(magic_point)
					{}

int Besta::getMagic_point(){return this->magic_point;}

void Besta::setMagic_point(int magic_point){this->magic_point = magic_point;}

//friend ostream& operator<<(ostream&, Magico&);

//friend istream& operator>>(istream&, Magico&);
