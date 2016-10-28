#include <iostream>
#include <cstdlib>
#include "PilhaVet.hpp"

using namespace std;

void imprimir(PilhaVet* p) {
	PilhaVet* aux = criar_pilha();
	
	while(!estah_vazia(p)) {
		cout << obter_topo(p) << endl;
		empilhar(aux, desempilhar(p));
	}
	cout << endl;
	
	while(!estah_vazia(aux)) {
		empilhar(p, desempilhar(aux));
	}	
	
	liberar_pilha(aux);
}

void copiarPara(PilhaVet* pOrigem, PilhaVet* pDestino, int n) {
	while(!estah_vazia(pOrigem) && !estah_cheia(pDestino) && n > 0) {
		empilhar(pDestino, desempilhar(pOrigem));
		n--;
	}
}

void swapPilha(PilhaVet* p1, PilhaVet* p2) {
	PilhaVet* aux = criar_pilha();
	
	int tamP1 = obter_tamanho(p1);
	int tamP2 = obter_tamanho(p2);
	
	copiarPara(p1, aux, tamP1);
	copiarPara(p2, aux, tamP2);
	copiarPara(aux, p1, tamP2);
	copiarPara(aux, p2, tamP1);	
	
	liberar_pilha(aux);
}

int main() {
	
	PilhaVet* p1 = criar_pilha();
	PilhaVet* p2 = criar_pilha();
	
	empilhar(p1, 2);
	empilhar(p1, 3);
	empilhar(p2, 4);
	
	cout << "** Antes do swap **" << endl;
	cout << "Pilha 1:" << endl;
	imprimir(p1);
	cout << "Pilha 2:" << endl;
	imprimir(p2);
	
	swapPilha(p1, p2);
	
	cout << "** Depois do swap **" << endl;
	cout << "Pilha 1:" << endl;
	imprimir(p1);
	cout << "Pilha 2:" << endl;
	imprimir(p2);	
		
	return EXIT_SUCCESS;
}
