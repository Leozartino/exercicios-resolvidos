#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <iostream>

using namespace std;

struct Aluno;

Aluno* criar_aluno(string nomeAluno, double craAluno);
string obter_nome(Aluno* aluno);
double obter_cra(Aluno* aluno);
void liberar_aluno(Aluno* aluno);

#endif
