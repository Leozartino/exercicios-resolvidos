#include<cstdlib>
#include<iostream>
#include "filavet.hpp"

using namespace std;

void copiar(FilaVet* de, FilaVet* para) {
	while(!estah_vazia(de)) {
		inserir(para, remover(de));
	}
}

FilaVet* mesclarFilas(FilaVet* f1, FilaVet* f2) {
	FilaVet* fMesclada = criar_fila();
	while(!estah_vazia(f1) && !estah_vazia(f2)) {
		int iniF1 = obter_inicio(f1);
		int iniF2 = obter_inicio(f2);
		if (iniF1 < iniF2) {
			inserir(fMesclada, remover(f1));
		} else {
			inserir(fMesclada, remover(f2));			
		}
	}
	
	copiar(f1, fMesclada);
	copiar(f2, fMesclada);
	
	return fMesclada;
}

int main() {	
	FilaVet* f1 = criar_fila();
	FilaVet* f2 = criar_fila();
	
	inserir(f1, 1);
	inserir(f1, 2);
	inserir(f1, 3);
	inserir(f1, 4);
	inserir(f2, 0);
	
	FilaVet* f3 = mesclarFilas(f1, f2);
	
	while(!estah_vazia(f3)) {
		cout << remover(f3) << " ";
	}
	cout << endl;
	
	return EXIT_SUCCESS;
}

