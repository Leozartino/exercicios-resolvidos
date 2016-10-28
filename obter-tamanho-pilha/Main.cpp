#include <iostream>
#include <cstdlib>
#include "PilhaVet.hpp"

using namespace std;

int main() {
	
	PilhaVet* p = criar_pilha();
	
	empilhar(p, 1);
	empilhar(p, 2);
	empilhar(p, 3);
	
	cout << obter_tamanho(p) << endl;
	
	return EXIT_SUCCESS;
}
