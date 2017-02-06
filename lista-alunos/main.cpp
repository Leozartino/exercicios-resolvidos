#include <cstdlib>
#include <iostream>
#include "aluno.hpp"
#include "listaenc.hpp"

using namespace std;

void imprimirDadosAluno(Aluno* aluno) {
	cout << "Nome: " << obter_nome(aluno) << endl;
	cout << "CRA: " << obter_cra(aluno) << endl << endl;
}

int main() {
	Aluno* a1 = criar_aluno("Paulo", 67.5);
	Aluno* a2 = criar_aluno("José", 78.7);
	Aluno* a3 = criar_aluno("Maria", 98.0);
	Aluno* a4 = criar_aluno("Pedro", 28.7);
	
	ListaEnc* li = criar_lista();
	
	inserir(li, a1, 0);
	inserir(li, a2, 0);
	inserir(li, a3, 1);
	inserir(li, a4, 3);
	
	Aluno *alunoInicio = remover(li, 3); 
	imprimirDadosAluno(alunoInicio);
	
	liberar_aluno(alunoInicio);
	
	imprimir_lista(li);
		
	return EXIT_SUCCESS;
}
