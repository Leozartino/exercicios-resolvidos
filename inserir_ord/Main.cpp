#include<cstdlib>
#include<iostream>
#include "listavet.hpp"

using namespace std;

void imprimir(ListaVet* lista) {
    int qtdeElementos = obter_tamanho(lista);
    for(int i = 0; i < qtdeElementos; i++) {
        cout << obter(lista, i) << " ";
    }
    cout << endl;
}


int main() {	
	ListaVet* li = criar_lista();

	inserir_ord(li, 3);
	inserir_ord(li, 2);
	inserir_ord(li, 1);
	inserir_ord(li, 4);
	inserir_ord(li, 5);
	inserir_ord(li, 0);
	
	while(!estah_vazia(li)) {
		cout << remover(li, 0) << endl;
	}
	
	return EXIT_SUCCESS;
}

