#include "monstro.h"

using namespace std;

Monstro::Monstro(){}
Monstro::Monstro(int vida, int forca, int espirito, int vitalidade):
			vida(vida),
			forca(forca),
			espirito(espirito),
			vitalidade(vitalidade)
			{}

//GETTERS
int Monstro::getVida(){return this->vida;}
int Monstro::getForca(){return this->forca;}
int Monstro::getEspirito(){return this->espirito;}
int Monstro::getVitalidade(){return this->vitalidade;}

	
// SETTERS
void Monstro::setVida(int vida){this->vida = vida;}
void Monstro::setForca(int forca){this->forca = forca;}
void Monstro::setEspirito(int espirito){this->espirito = espirito;}
void Monstro::setVitalidade(int vitalidade){this->vitalidade = vitalidade;}

//SOBRECARGA DE OPERADORES

//friend ostream& operator<<(ostream&, Monstro&);

//friend istream& operator>>(istream&, Monstro&);
