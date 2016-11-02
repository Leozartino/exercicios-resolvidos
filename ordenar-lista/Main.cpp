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

ListaVet* ordenar_lista(ListaVet* li) {
	ListaVet* li_ord = criar_lista();
	while(!estah_vazia(li)) {
		inserir_no_fim(li_ord, remover_min(li));			
	}
	liberar_lista(li);
	return li_ord;
}


int main() {	
	ListaVet* li = criar_lista();

	inserir(li, 4, 0);
	inserir(li, 1, 0);
	inserir(li, 2, 0);
	inserir(li, 3, 0);
	inserir(li, 2, 0);
	inserir(li, 3, 0);
	inserir(li, 4, 0);
	inserir(li, 1, 0);
	
	imprimir(li);	
	li = ordenar_lista(li);
	imprimir(li);	
	
	return EXIT_SUCCESS;
}

