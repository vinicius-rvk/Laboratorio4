#include <iostream>
#include "monstro.h"
//#include "besta.h"
//#include "magico.h"
#include "aladoTemplate.h"

using namespace std;

int main(){
	Monstro* alado = new aladoTemplate(1,1,1,1,1);
	//Monstro* magico = new Magico();
	//Monstro* besta = new Besta();

	//cout << alado->getAgilidade() << endl;

	Lista<Monstro>* deque1 = new Lista<Monstro>();

	deque1->inserir(alado);

	delete alado;
	//delete magico;
	//delete besta;


	return 0;
}