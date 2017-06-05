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

string Alado::getNome(){return this->nome;}
int Alado::getAgilidade(){return this->agilidade;}


void Alado::setNome(string nome){this->nome = nome;}
void Alado::setAgilidade(int agilidade){this->agilidade = agilidade;}

//friend ostream& operator<<(ostream&, Alado&);

//friend istream& operator>>(istream&, Alado&);
