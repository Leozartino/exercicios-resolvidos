#include <iostream>
#include "listaenc.hpp"

using namespace std;

void imprimir_lista(ListaEnc* lista) {
	for(int i = 0; i < obter_tamanho(lista); i++) {
		cout << obter_elemento(lista, i) << " ";
	}
	cout << endl;
}

int main() {
	ListaEnc* lista = criar_lista();
	inserir(lista, 1, 0);
	inserir(lista, 2, 0);
	inserir(lista, 3, 0);
	inserir(lista, 2, 0);
	inserir(lista, 10, 0);
	inserir(lista, 12, 0);
	inserir(lista, 120, 0);
	inserir(lista, 111, 0);
	imprimir_lista(lista);
	ordenar(lista);
	imprimir_lista(lista);
	return 0;
}
