#include <cstdlib>
#include "hash.hpp"

struct THash {
	int* tabela[M];
};

THash* criar_thash() {
	THash* thash = new THash;
	for(int i = 0; i < M; i++) {
		thash->tabela[i] = NULL;
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
	
	// A posição 'pos' da tabela hash está 
	// disponível
	if (thash->tabela[pos] == NULL) {
		thash->tabela[pos] = new int;
		*thash->tabela[pos] = item;
	} else {
		int j = 1;
		
		// Nova posição a ser consultada, de acordo
		// com o método de hasing linear
		int hj = (pos + j) % M;
		while(j < M && thash->tabela[hj] != NULL) {
			j++;
			hj = (pos + j) % M;
		}
		
		if (thash->tabela[hj] == NULL) {
			thash->tabela[hj] = new int;
			*thash->tabela[hj] = item;
		}
	}
	
}

bool buscar(THash* thash, int item) {
	// Descobre a posição da tabela hash, na qual o
	// item DEVE estar
	int pos = ft_resto(item);
	
	if (thash->tabela[pos] == NULL) {
		return false;
	}
	
	if (*thash->tabela[pos] == item) {
		return true;
	} else {
		int j = 1;
		
		// Nova posição a ser consultada, de acordo
		// com o método de hasing linear
		int hj = (pos + j) % M;
		while(j < M && thash->tabela[hj] != NULL) {
			if (*thash->tabela[hj] == item) {
				return true;
			}
			j++;
			hj = (pos + j) % M;
		}
		
		return false;
	}
}
