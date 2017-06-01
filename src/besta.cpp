#include "besta.h"
#include "monstro.h"
using namespace std;

Besta::Besta():Monstro(){}
Besta::Besta(int vida, 
				int forca, 
				int espirito, 
				int vitalidade,
				string nome, 
				int furia):
					Monstro(vida, forca, espirito, vitalidade),
					furia(furia)
					{}

string Besta::getNome(){return this->nome;}
int Besta::getFuria(){return this->furia;}

void Besta::setNome(string nome){this->nome = nome;}
void Besta::setFuria(int furia){this->furia = furia;}

//friend ostream& operator<<(ostream&, Magico&);

//friend istream& operator>>(istream&, Magico&);
