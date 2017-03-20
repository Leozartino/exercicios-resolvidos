#include "hash.hpp"
#include "listaenc.hpp"

struct THash {
	ListaEnc* tabela[M];
};

THash* criar_thash() {
	THash* thash = new THash;
	for(int i = 0; i < M; i++) {
		thash->tabela[i] = criar_lista();
	}
	return thash;
}

int ft_resto(int item) {
	return item % M;
}

void inserir(THash* thash, int item) {
	// Descobre a posição da tabela hash, na qual eu
	// devo inserir o item.
	int pos = ft_resto(item);
	
	// Devolve a lista encadeada na qual eu devo 
	// inserir o item 
	ListaEnc* li = thash->tabela[pos];
	
	// Insere o item na lista li.
	inserir(li, item, 0);
	
	// Versão mais eficiente...
	// inserir(thash->tabela[ft_resto(item)], item);
}

bool buscar(THash* thash, int item) {
	// Descobre a posição da tabela hash, na qual o
	// item DEVE estar
	int pos = ft_resto(item);
	
	// Devolve a lista encadeada na qual eu devo 
	// procurar pelo item
	ListaEnc* li = thash->tabela[pos];
	
	// Uso a função existe da lista para descobrir
	// se o item está lá
	return existe(li, item);	
}
