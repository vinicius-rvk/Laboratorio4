#include <iostream>
//#include "listaEncadeada.h"
#include "batalha.h"
//#include "main.h"

using namespace std;




int main(){
  	string str;


  	Lista<Monstro>* cards_player = new Lista<Monstro>();
  	Lista<Monstro>* cards_pc = new Lista<Monstro>();
  	
  	cards_player->ler_banco("banco/save_game_player.txt");
  	cards_pc->ler_banco("banco/save_game_pc.txt");

  	if(!cards_player->esta_vazia() && !cards_pc->esta_vazia()){
  		cout << "EXISTE UM JOGO SALGO, DESEJA CONTINUAR? s/n: ";
  		cin >> str;
  		if(str == "n" || str == "N"){
	  		//cout << "ENTROU PRA RELER" << endl;
	  		delete cards_player;
	  		delete cards_pc;

		  	cards_player = new Lista<Monstro>();
		  	cards_pc = new Lista<Monstro>();
		  		 
	  		cards_player->ler_banco("banco/grimorio_player.txt");
	  		cards_pc->ler_banco("banco/grimorio_pc.txt");
  		}
  	}
  	//cards_player->listar();
  	//cards_pc->listar();
  	batalha(cards_player, cards_pc);

  	if(!cards_player->esta_vazia() && !cards_pc->esta_vazia()){
	  	cout << "DESEJA SALVAR O PROGRESSO? s/n:  ";
	  	cin >> str;
	  	if(str == "s" || str == "S"){
		  	cards_player->salvar("banco/save_game_player.txt");
		  	cards_pc->salvar("banco/save_game_pc.txt");
	  	}
	}
  	delete cards_player;
  	delete cards_pc;


	return 0;
}