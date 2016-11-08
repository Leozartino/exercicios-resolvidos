#include<cstdlib>
#include<iostream>

#include "filadvet.hpp"

using namespace std;

bool eh_polindromo(string palavra) {
	int tam_palavra = palavra.length();
	
	FilaDVet* fila = criar_fila_d();
	
	for(int i = 0; i < tam_palavra; i++) {
		inserir_no_fim(fila, palavra[i]);
	}
	
	while(tam_palavra > 1) {
		if (remover_do_inicio(fila) != remover_do_fim(fila)) {
			return false;
		}
		tam_palavra = tam_palavra - 2;	
	}
	
	return true;
}

int main() {
	string palavra;
	cout << "Informe uma palavra: ";
	cin >> palavra;
	if (eh_polindromo(palavra)) {
		cout << "\"" << palavra << "\"" << " é um palíndromo!" << endl;
	} else {
		cout << "\"" << palavra << "\"" << " NÃO é um palíndromo!" << endl;
	}
	return EXIT_SUCCESS;
}
