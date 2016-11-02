#include<cstdlib>
#include<iostream>
#include "pilhavet.hpp"

using namespace std;

int main() {	
	PilhaVet* p = criar_pilha();

	empilhar(p, 1);
	empilhar(p, 2);
	empilhar(p, 3);
	empilhar(p, 4);
	
	while(!estah_vazia(p)) {
		cout << desempilhar(p) << endl;
	}
	
	return EXIT_SUCCESS;
}

