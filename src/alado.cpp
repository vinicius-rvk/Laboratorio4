#include "alado.h"
using namespace std;

Alado::Alado():Monstro(){}
Alado::Alado(int vida, 
				int forca, 
				int espirito, 
				int vitalidade,
				string nome, 
				int agilidade)
					:
					Monstro(vida, forca, espirito, vitalidade),
					nome(nome),
					agilidade(agilidade)
					{}

int Alado::getAgilidade(){return this->agilidade;}
string Alado::getNome(){return this->nome;}

void Alado::setNome(string nome){this->nome = nome;}

void Alado::setAgilidade(int agilidade){this->agilidade = agilidade;}

//friend ostream& operator<<(ostream&, Alado&);

//friend istream& operator>>(istream&, Alado&);
