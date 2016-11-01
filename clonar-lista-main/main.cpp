#include <cstdlib> /* Permite o uso da constante EXIT_SUCCESS */
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
	
	return EXIT_SUCCESS;
}

