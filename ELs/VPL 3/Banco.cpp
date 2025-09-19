#include "Banco.hpp"
#include "ContaBancaria.hpp"
#include <iostream>
#include <string>
using namespace std;
Banco::Banco() 
{
    {
        contas=0;
        for (int i=0;i<20;i++)
        {
            vetor[i]=nullptr;
        }
    }
}
void Banco::CriaConta(int x,string y)
{   
    ContaBancaria* conta =new ContaBancaria(x,y);
    ContaBancaria* copia =Pesquisa(x);
    if (copia==nullptr)
    {
        vetor [contas]= conta;
        contas++;
        cout<< "conta criada"<< endl;
    }
    else cout<< "ERRO: conta repetida"<<endl;
}

ContaBancaria* Banco::Pesquisa(int x)
{
    ContaBancaria* busca=nullptr;
    for (int i = 0; i < contas; i++)
    {
        if (vetor[i]->id==x) busca=vetor[i];
    }
    return(busca);
}

void Banco:: ListaContas()
{
    for (int i = 0; i < contas; i++)
    {
        vetor[i]->Imprime();
    }
}