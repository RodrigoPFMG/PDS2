#include <iostream>
#include <string>
#include <set>
#include "aluno.hpp"
struct compara_pessoa_f {
bool operator()(const Aluno& a1, const Aluno& a2) {
return a1.nome < a2.nome;
}
};

using namespace std;

int main ()
{
    set<Aluno, compara_pessoa_f> s ;
    string teclado="";
    int teclado_aux=0;
    Aluno a;
    while (cin>>teclado)
    {   
        if (teclado=="END") break;
        else{
            a.nome=teclado;
            cin>>teclado_aux;
            a.matricula=teclado_aux;
            cin>>teclado_aux;
            while (teclado_aux!=-1){
                a.notas.push_back(teclado_aux);
            cin>>teclado_aux;
            }               
        }
        s.insert(a);
        a.notas.clear();
    }
    for (Aluno a :s ){
    a.ImprimeData();
    }
}