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

	inserir(li, 1, 0);
	inserir(li, 2, 1);
	inserir(li, 3, 1);
	inserir(li, 4, 2);
	
	imprimir(li);
	
	while(!estah_vazia(li)) {
		cout << remover_min(li) << endl;
	}
	
	return EXIT_SUCCESS;
}

