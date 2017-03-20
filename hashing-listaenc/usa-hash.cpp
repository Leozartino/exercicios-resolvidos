#include<iostream>
#include<cstdlib>
#include "hash.hpp"

using namespace std;

void imprimeResultado(bool resultado, int el) {
	if (resultado) {
		cout << "Uhuu ;) Achou o elemento " << el << "!" << endl;
	} else {
		cout << "Ops... :\\ Nao achou o elemento " << el << "!" << endl;
	}
}

int main() {
	THash* thash = criar_thash();
	inserir(thash, 2);
	inserir(thash, 16);	
	inserir(thash, 3);	
	inserir(thash, 17);	
	
	int el = 17;
	
	imprimeResultado(buscar(thash, el), el);
	
		
	return EXIT_SUCCESS;
}
