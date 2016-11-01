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
	return EXIT_SUCCESS;
}

