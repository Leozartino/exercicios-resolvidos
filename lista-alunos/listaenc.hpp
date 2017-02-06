#ifndef LISTAENC_HPP
#define LISTAENC_HPP

#include "aluno.hpp"

struct Noh;
struct ListaEnc;

ListaEnc* criar_lista();
bool estah_vazia(ListaEnc* li);
void inserir(ListaEnc* li, Aluno* aluno, int pos);
Aluno* remover(ListaEnc* li, int pos);
Aluno* obter_elemento(ListaEnc* li, int pos);
void imprimir_lista(ListaEnc *li);

#endif
