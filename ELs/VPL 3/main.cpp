#include <iostream>
#include <string>
#include "Banco.hpp"
#include "ContaBancaria.hpp"

using namespace std;

int main ()
{
    int termino=0;
    Banco* banco = new Banco();
    while(1)
    {
        string operacao="";
        cin>>operacao;
        int param_id;
        int param_dest;
        string param_cliente;
        float param_valor;
        ContaBancaria* end;
        ContaBancaria* end2;
        switch (operacao[0])
        {
            case 'C':
            cin>>param_id;
            cin>>param_cliente;
            banco->CriaConta(param_id,param_cliente);
            break;

            case 'D':
            cin>>param_id;
            cin>>param_valor;
            end=banco->Pesquisa(param_id);
            if (end==nullptr) cout<<"ERRO: conta inexistente"<<endl;
            else end->Deposito(param_valor);
            break;

            case 'S':
            cin>>param_id;
            cin>>param_valor;
            end= banco->Pesquisa(param_id);
            if (end==nullptr) cout<<"ERRO: conta inexistente"<<endl;
            else end->Saque(param_valor);
            break;

            case 'P':
            cin>>param_id;
            cin>>param_dest;
            cin>>param_valor;
            end= banco->Pesquisa(param_id);
            end2= banco->Pesquisa(param_dest);
            if ((end==nullptr)||(end2==nullptr)) cout<<"ERRO: conta inexistente"<<endl;
            else end->Pix(end2,param_valor);
            break;

            case 'I':
            banco->ListaContas();
            break;

            case 'T':
            termino=1;
            break;
        }
        if (termino==1) break;
    }
    delete banco;
}