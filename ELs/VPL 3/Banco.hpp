#ifndef BANCO_H
#define BANCO_H
#include "ContaBancaria.hpp"

struct Banco {
    ContaBancaria* vetor[20];
    int contas;
    Banco();
    
    void CriaConta(int id,string cliente);
    ContaBancaria* Pesquisa(int id);
    void ListaContas();
};

#endif