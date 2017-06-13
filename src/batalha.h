#ifndef _BATALHA_HPP_
#define _BATALHA_HPP_

#include "listaEncadeada.h"
#include "monstro.h"
#include "alado.h"
#include "besta.h"
#include "magico.h"
#include <cstdlib>


string tipo_monstro( Monstro* monstro);

Monstro* getMonstroPC(Lista<Monstro>* pc, int n);

template<typename T>
void batalha(Lista<T>* player, Lista<T>* pc);


#endif //_BATALHA_HPP_