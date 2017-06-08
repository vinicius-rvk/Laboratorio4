#include "magico.h"

using namespace std;

Magico::Magico():Monstro(){}
Magico::Magico(int vida,
				int forca, 
				int espirito, 
				int vitalidade,
				string nome, 
				int magic_point):
					Monstro(vida, forca, espirito, vitalidade),
					magic_point(magic_point)
					{}

int Magico::getMagic_point(){return this->magic_point;}
string Magico::getNome(){return this->nome;}

void Magico::setNome(string nome){this->nome = nome;}

void Magico::setMagic_point(int magic_point){this->magic_point = magic_point;}

//friend ostream& operator<<(ostream&, Magico&);

//friend istream& operator>>(istream&, Magico&);