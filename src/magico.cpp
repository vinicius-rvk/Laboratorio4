#include "magico.h"

using namespace std;

Magico::Magico():Monstro(){}
Magico::Magico(vector<string>& palavras){


	this->nome = palavras[0];
	this->tipo = palavras[6];
	this->vida = stoi(palavras[1]);
	this->forca = stoi(palavras[2]);
	this->espirito = stoi(palavras[3]);
	this->vitalidade = stoi(palavras[4]);
	this->magic_point = stoi(palavras[5]);

}
Magico::Magico( string nome,
				int vida,
				int forca, 
				int espirito, 
				int vitalidade,
				int magic_point):
					Monstro(nome, "m", vida, forca, espirito, vitalidade),
					magic_point(magic_point)
					{}

int Magico::getEspecial(){return this->magic_point;}


void Magico::setEspecial(int magic_point){this->magic_point = magic_point;}

ostream& operator<<(ostream& o, Magico& magico){
	o << "Nome: " << magico.getNome() << endl;
	o << "Vida: " << magico.getVida() << endl;
return o;
}

//friend istream& operator>>(istream&, Magico&);
