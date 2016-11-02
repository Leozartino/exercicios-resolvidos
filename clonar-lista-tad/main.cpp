#include <iostream>
#include <cstdlib>
#include "listavet.hpp"

using namespace std;

void imprimir(ListaVet* li) {
	for(int i = 0; i < obter_tamanho(li); i++) {
		cout << obter(li, i) << "  ";
	}
	cout << endl;
}

int main() {
	ListaVet* lOriginal = criar_lista();
	
	inserir(lOriginal, 3, 0);
	inserir(lOriginal, 2, 0);
	inserir(lOriginal, 1, 0);
	
	ListaVet* lClone = clonar_lista(lOriginal);
	
	imprimir(lOriginal);
	imprimir(lClone);
	
	
	return EXIT_SUCCESS;
}

