#ifndef HASH_HPP
#define HASH_HPP

#define M 7 

struct THash;

THash* criar_thash();
void inserir(THash* thash, int item);
bool buscar(THash* thash, int item);

#endif
