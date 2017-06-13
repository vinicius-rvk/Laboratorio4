#include "batalha.h"

using namespace std;
string tipo_monstro( Monstro* monstro){
	if(monstro->getTipo() == "a")
		return "a";
	else if (monstro->getTipo() == "b")
		return "b";
	else
		return "m";
}
Monstro* getMonstroPC(Lista<Monstro>* pc, int n){
	Monstro* npc = pc->getFirst()->getNext();
	for(int i = 0; i < (n%pc->getQuantidade()+1); i++){
		npc = npc->getNext();
	}
	cout << npc->getNome() << endl;
	return npc;
}


void batalha(Lista<Monstro>* player, Lista<Monstro>* pc){
	int forca, espirito, vitalidade, especial;
	string sair = "";

	while(!player->esta_vazia() && !pc->esta_vazia() && sair != "exit"){

		int monstro_n = rand()%(pc->getQuantidade());

		system("clear");
		player->listar();
		cout << "NOME DO MONSTRO Q DESEJA USAR: ";
		string nome_monstro;
		cin >> nome_monstro;

		Monstro* monstro_player = player->buscar(nome_monstro);
		Monstro* monstro_pc = getMonstroPC(pc, monstro_n);

		if(monstro_player->getTipo() == "a"){

			if(tipo_monstro(monstro_pc) == "b"){
				forca = monstro_player->getForca()+(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()+(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()+(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Alado*)player->buscar(nome_monstro))->getEspecial()+(int)0.5*((Alado*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());  // estantaneamente faz a remoção reinserindo no final.
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else if(tipo_monstro(monstro_pc) == "m"){
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()-(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()-(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Alado*)player->buscar(nome_monstro))->getEspecial()-(int)0.5*((Alado*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else{
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade();
				especial = ((Alado*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}
		}else if(monstro_player->getTipo() == "b"){

			if(tipo_monstro(monstro_pc) == "m"){
				forca = monstro_player->getForca()+(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()+(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()+(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Besta*)player->buscar(nome_monstro))->getEspecial()+(int)0.5*((Besta*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else if(tipo_monstro(monstro_pc) == "a"){
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()-(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()-(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Besta*)player->buscar(nome_monstro))->getEspecial()-(int)0.5*((Besta*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else{
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade();
				especial = ((Besta*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}
		
		}else {

			if(tipo_monstro(monstro_pc) == "a"){
				forca = monstro_player->getForca()+(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()+(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()+(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Magico*)player->buscar(nome_monstro))->getEspecial()+(int)0.5*((Magico*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else if(tipo_monstro(monstro_pc) == "b"){
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito()-(int)0.2*monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade()-(int)0.2*monstro_player->getVitalidade(); 
				especial = ((Magico*)player->buscar(nome_monstro))->getEspecial()-(int)0.5*((Magico*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}else{
				forca = monstro_player->getForca()-(int)(0.3*monstro_player->getForca());
				espirito = monstro_player->getEspirito();
				vitalidade = monstro_player->getVitalidade();
				especial = ((Magico*)player->buscar(nome_monstro))->getEspecial();
				int dano = forca + espirito + vitalidade + especial;
				monstro_pc->setVida(monstro_pc->getVida() - dano);
				if(monstro_pc->getVida() <= 0){
					pc->inserir(monstro_pc);
					pc->remover(monstro_pc->getNome());					
					pc->setQuantidade(pc->getQuantidade()-1);
				}
			}
		
		}
		cout << "Digite exit para sair? ";
		cin >> sair;
	}
}