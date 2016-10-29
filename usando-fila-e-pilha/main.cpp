#include<cstdlib>
#include<iostream>

#include "PilhaVet.hpp"
#include "FilaVet.hpp"

using namespace std;

int main() {	
	PilhaVet* p = criar_pilha();
	FilaVet* f = criar_fila();
	
	inserir(f, 10);
	inserir(f, 20);
	inserir(f, 30);
	inserir(f, 15);
	inserir(f, 10);
	inserir(f, 20);
	inserir(f, 30);
	inserir(f, 30);
	
	while(!estah_vazia(f)) {
		empilhar(p, remover(f));
	}
	
	while(!estah_vazia(p)) {
		inserir(f, desempilhar(p));
	}
	
	while(!estah_vazia(f)) {
		cout << remover(f) << " ";
	}
	cout << endl;
		
	return EXIT_SUCCESS;
}
