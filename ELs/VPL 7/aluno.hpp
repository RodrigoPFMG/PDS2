#ifndef ALUNO_H
#define ALUNO_H
#include <string>
#include <vector>
using namespace std;

struct Aluno {
    int matricula;
    string nome;
    vector <int> notas;
      
Aluno();
float CalculaMedia(vector <int> notas);
int ComparaNotas(vector <int> notas,char sinal);
void ImprimeData();
};
#endif