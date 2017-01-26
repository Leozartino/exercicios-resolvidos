#include <cstdlib>
#include <iostream>
#include "pilhaenc.hpp"

using namespace std;

int main() 
{
	int dados[] = {1, 2, 3};
	PilhaEnc* mp = criar_pilha(dados, 3);
	
	while(!estah_vazia(mp)) {
		cout << desempilhar(mp) << endl;
	}	
	
	return EXIT_SUCCESS;
}
