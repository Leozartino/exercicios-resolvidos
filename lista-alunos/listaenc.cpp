#include <cstdlib>
#include <assert.h>
#include "listaenc.hpp"

struct Noh {
	Aluno* item;
	Noh* prox;
};

struct ListaEnc {
	Noh* inicio;
	int tam;
};

ListaEnc* criar_lista() {
	ListaEnc* lista = new ListaEnc;
	lista->inicio = NULL;
	lista->tam = 0;
	return lista;
}

bool estah_vazia(ListaEnc* li) {
	assert(li != NULL);
	return (li->inicio == NULL);
}

void inserir(ListaEnc* li, Aluno* aluno, int pos) {
	assert(li != NULL);
	assert(pos >= 0 && pos <= li->tam);
	
	Noh* novo_noh = new Noh;
	novo_noh->item = aluno;
	
	if (pos == 0) {
		novo_noh->prox = li->inicio;
		li->inicio = novo_noh;
	} else {
		// Insere no meio da lista
		Noh* aux = li->inicio;
		for(int i = 0; i < pos - 1; i++) {
			aux = aux->prox;
		}
		novo_noh->prox = aux->prox;
		aux->prox = novo_noh;
	}
	li->tam++;
}

Aluno* remover(ListaEnc* li, int pos) {
	assert(li != NULL);
	assert(pos >= 0 && pos < li->tam);
	
	Noh* aux = li->inicio;
	if (pos == 0) {
		li->inicio = aux->prox;		
	} else {
		Noh* ant = NULL;
		for(int i = 0; i < pos; i++) {
			ant = aux;
			aux = aux->prox;
		}
		ant->prox = aux->prox;
	}
	
	li->tam--;
	Aluno* aluno = aux->item;
	delete aux;
	return aluno;
}


Aluno* obter_elemento(ListaEnc* li, int pos) {
	assert(li != NULL);
	assert(pos >= 0 && pos < li->tam);

	Noh* aux = li->inicio;
	for(int i = 0; i < pos; i++) {
		aux = aux->prox;
	}
	
	return criar_aluno(obter_nome(aux->item), 
		obter_cra(aux->item));	
}

void imprimir_lista(ListaEnc *li) {
	assert(li != NULL);
	Noh* aux = li->inicio;
	while(aux != NULL) {
		cout << "Nome: " << obter_nome(aux->item) << 
				" (CRA: " << obter_cra(aux->item) <<
				")" << endl;		
		aux = aux->prox;
	}
 }

