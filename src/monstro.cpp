#include "monstro.h"
using namespace std;

Monstro::Monstro():
			vida(0),
			forca(0),
			espirito(0),
			vitalidade(0)
			{}
Monstro::Monstro(int vida, int forca, int espirito, int vitalidade):
			vida(vida),
			forca(forca),
			espirito(espirito),
			vitalidade(vitalidade)
			{}

	//GETTERS
int Monstro::getVida(){return vida;}
int Monstro::getForca(){return forca;}
int Monstro::getEspirito(){return espirito;}
int Monstro::getVitalidade(){return vitalidade;}

	// SETTERS
void Monstro::setVida(int vida){this->vida = vida;}
void Monstro::setForca(int forca){this->forca = forca;}
void Monstro::setEspirito(int espirito){this->espirito = espirito;}
void Monstro::setVitalidade(int vitalidade){this->vitalidade = vitalidade;}

	//SOBRECARGA DE OPERADORES
//friend ostream& operator<<(ostream&, Monstro&);

//friend istream& operator>>(istream&, Monstro&);
