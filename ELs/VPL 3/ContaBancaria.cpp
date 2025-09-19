#include "ContaBancaria.hpp"
#include "Banco.hpp"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

    ContaBancaria::ContaBancaria (int x, string y)
    {
        id=x;
        cliente=y;
        saldo=0;
    }
    
    void ContaBancaria::Deposito (int x)
    {
        saldo+=x;
        cout<<"deposito efetuado"<<endl;
    }
    void ContaBancaria::Saque (int x)
    {
        saldo-=x;
        cout<<"saque efetuado"<<endl;   
    }

    void ContaBancaria::Pix (ContaBancaria* x, int y)
    {
        saldo-=y;
        x->saldo+=y;
        cout<<"pix efetuado"<<endl;
    }
    void ContaBancaria::Imprime()
    {
        cout << fixed << setprecision(2);
        cout<<id<<" "<<cliente<<" "<<saldo<<endl;
    }