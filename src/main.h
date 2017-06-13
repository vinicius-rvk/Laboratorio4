#ifdef _MAIN_HPP_
#define _MAIN_HPP_
#include "listaEncadeada.h"
using namespace std;


string tipo_monstro( Monstro* monstro);
}
Monstro* getMonstroPC(Lista<Monstro>* pc, int n);


void batalha(Lista<Monstro>* player, Lista<Monstro>* pc);

#endif