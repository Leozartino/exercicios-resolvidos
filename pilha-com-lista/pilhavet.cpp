#include <assert.h> /**< Necessário para uso da macro "assert". */
#include <cstdlib> /**< Necessário para uso do NULL. */
#include "pilhavet.hpp"
#include "listavet.hpp"

using namespace std;

struct PilhaVet {
	ListaVet* itens; /**< Lista que armazena os itens da pilha. */
};

PilhaVet* criar_pilha() {
	/* 
	 * Caso não seja possível alocar o espaço solicitado, o próprio operador "new"
	 * irá lançar uma exceção abortando a execução do programa.
	 */
	PilhaVet* pilha = new PilhaVet;
    
	pilha->itens = criar_lista();
	return pilha;
}

void liberar_pilha(PilhaVet* pilha) {
	/* 
	 * Macro da biblioteca \file assert.h. Aborta a execução do programa e envia uma mensagem 
	 * de erro para a saída de erro padrão, caso a expressão entre parênteses seja avaliada 
	 * como false.
	 */
	assert(pilha != NULL);
	
	liberar_lista(pilha->itens);
	delete pilha;		
}

bool estah_cheia(PilhaVet* pilha) {
	assert(pilha != NULL);	
    
	return estah_cheia(pilha->itens);
}

bool estah_vazia(PilhaVet* pilha) {
	assert(pilha != NULL);	
	
	return estah_vazia(pilha->itens);
}

void empilhar(PilhaVet* pilha, int item) {
	assert(pilha != NULL);
	assert(!estah_cheia(pilha));    
    
	inserir_no_fim(pilha->itens, item);
}

int desempilhar(PilhaVet* pilha) {
	assert(pilha != NULL);
	assert(!estah_vazia(pilha));    
        
	return remover_do_fim(pilha->itens);    
}

int obter_topo(PilhaVet* pilha) {
	assert(pilha != NULL);
	assert(!estah_vazia(pilha));    
    
	return obter_do_fim(pilha->itens);
}
