#include <cstdlib>
#include <iostream>
#include "pilhaenc.hpp"

using namespace std;

int main() 
{
	PilhaEnc* mp = criar_pilha();
	
	empilhar(mp, 1);
	empilhar(mp, 2);
	empilhar(mp, 3);
	empilhar(mp, 4);
	
	desempilhar_k(mp, 10);
	
	while(!estah_vazia(mp)) {
		cout << desempilhar(mp) << endl;
	}
	
	return EXIT_SUCCESS;
}
