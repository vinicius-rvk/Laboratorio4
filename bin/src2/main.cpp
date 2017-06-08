#include <iostream>
#include "monstro.h"
#include "besta.h"
#include "magico.h"
#include "alado.h"

using namespace std;

int main(){
	Monstro* alado = new Alado(1,1,1,1,1);
	Monstro* magico = new Magico();
	Monstro* besta = new Besta();

	//cout << alado->getAgilidade() << endl;

	delete alado;
	delete magico;
	delete besta;


	return 0;
}