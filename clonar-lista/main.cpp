#include <iostream>
#include "listavet.hpp"

using namespace std;

void imprimir(ListaVet* li) {
	for(int i = 0; i < obter_tamanho(li); i++) {
		cout << obter(li, i) << "  ";
	}
	cout << endl;
}

int main() {
	ListaVet* li = criar_lista();
	inserir(li, 1, 0);	
	inserir(li, 2, 0);
	inserir(li, 3, 0);	
	
	
	ListaVet* clone = clonar_lista(li);
	
	imprimir(li);
	imprimir(clone); 
	
	
	return 0;
}

