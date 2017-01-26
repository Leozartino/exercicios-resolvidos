#include <cstdlib>
#include <iostream>
#include "pilhaenc.hpp"

using namespace std;

PilhaEnc* somar_pilhas(PilhaEnc* pa, PilhaEnc *pb) 
{
	PilhaEnc* auxPA = criar_pilha();
	PilhaEnc* auxPB = criar_pilha();
	PilhaEnc* pr = criar_pilha();
	
	while(!estah_vazia(pa)) {
		empilhar(auxPA, desempilhar(pa));
		empilhar(auxPB, desempilhar(pb));
	}
	
	while(!estah_vazia(auxPA)) {
		int elPA = desempilhar(auxPA);
		int elPB = desempilhar(auxPB);
		
		empilhar(pr, elPA + elPB);
		empilhar(pa, elPA);
		empilhar(pb, elPB);
	}
	
	liberar_pilha(auxPA);
	liberar_pilha(auxPB);
	
	return pr;
}

int main() 
{
	PilhaEnc* pa = criar_pilha();
	PilhaEnc* pb = criar_pilha();
	
	empilhar(pa, 1);
	empilhar(pa, 2);
	empilhar(pa, 3);
	
	empilhar(pb, 4);
	empilhar(pb, 4);
	empilhar(pb, 5);
	
	PilhaEnc* pr = somar_pilhas(pa, pb);
	
	while(!estah_vazia(pa)) {
		cout << desempilhar(pa) << endl;		
	}
	cout << endl;
	
	while(!estah_vazia(pb)) {
		cout << desempilhar(pb) << endl;		
	}
	cout << endl;
	
	while(!estah_vazia(pr)) {
		cout << desempilhar(pr) << endl;		
	}	
		
	return EXIT_SUCCESS;
}
