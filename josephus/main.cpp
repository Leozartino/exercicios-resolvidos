#include<cstdlib>
#include<iostream>

#include "FilaVet.hpp"

using namespace std;

int main() {	
	FilaVet* f = criar_fila();
	
	inserir(f, 1);
	inserir(f, 2);
	inserir(f, 3);
	inserir(f, 4);
	inserir(f, 5);
	
	int n;
	cin >> n;
	
	while(!estah_vazia(f)) {
		for(int i = 0; i < n - 1; i++) {
			inserir(f, remover(f));
		}
		cout << remover(f) << " "; 		
	}	
	cout << endl;	
	
	return EXIT_SUCCESS;
}
