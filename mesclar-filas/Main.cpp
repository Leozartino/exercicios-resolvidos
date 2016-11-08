#include<cstdlib>
#include<iostream>
#include "filavet.hpp"

using namespace std;

FilaVet* mesclar_fila(FilaVet* f1, FilaVet* f2) {
	FilaVet* fm = criar_fila();
	
	while(!estah_vazia(f1) && !estah_vazia(f2)) {
		if (obter_inicio(f1) < obter_inicio(f2)) {
			inserir(fm, remover(f1));
		} else {
			inserir(fm, remover(f2));
		}
	}
	
	while(!estah_vazia(f1)) { inserir(fm, remover(f1)); }
	while(!estah_vazia(f2)) { inserir(fm, remover(f2)); }
	
	return fm;
	
}

int main() {	
	FilaVet* f1 = criar_fila();
	FilaVet* f2 = criar_fila();
	
	inserir(f1, 2);
	inserir(f1, 4);
	inserir(f1, 5);
	inserir(f2, 1);
	inserir(f2, 3);
	
	FilaVet* fm = mesclar_fila(f1, f2);
	
	while(!estah_vazia(fm)) {
		cout << remover(fm) << endl;
	}	
	
	return EXIT_SUCCESS;
}

