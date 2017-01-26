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
	
	cout << "Tamanho da pilha: " << obter_tamanho(mp) << endl;
	
	
	while(!estah_vazia(mp)) {
		cout << desempilhar(mp) << endl;
	}	
	
	
	cout << "Tamanho da pilha: " << obter_tamanho(mp) << endl;
	
	return EXIT_SUCCESS;
}
