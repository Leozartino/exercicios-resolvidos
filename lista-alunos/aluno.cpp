#include "aluno.hpp"

struct Aluno {
	string nome;
	double CRA;
};

Aluno* criar_aluno(string nomeAluno, double craAluno) {
	Aluno* aluno = new Aluno;
	aluno->nome = nomeAluno;
	aluno->CRA = craAluno;
	return aluno;
}

string obter_nome(Aluno* aluno) {
	return aluno->nome;
}

double obter_cra(Aluno* aluno) {
	return aluno->CRA;
}

void liberar_aluno(Aluno* aluno) {
	delete aluno;
}
