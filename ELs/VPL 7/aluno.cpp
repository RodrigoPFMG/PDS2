#include "aluno.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
Aluno::Aluno() {
    matricula =0;
    nome="";
    notas= {};
}

float Aluno::CalculaMedia(vector <int> notas){
    unsigned int n=0;
    float media=0;
    for (n=0; n< notas.size(); n++) {
        media+=notas[n]; 
    }
    media=(media/n);
    return(media);    
}

int Aluno::ComparaNotas(vector <int> notas,char sinal){
    unsigned int n=0;
    int valor=notas[n];
    if (sinal=='+'){
        for (n=1;n< notas.size();n++){
            if (notas[n]>valor) valor= notas[n];
        }
    }
    else{
        for (n=1;n<notas.size();n++){
            if (notas[n]<valor) valor= notas[n];
        }
    } 
    
    return (valor);
}

void Aluno::ImprimeData(){
    cout << matricula << " " << nome << " ";
    for ( unsigned int n=0;n<notas.size();n++){
        cout<<notas[n]<<" ";
    }
    cout<< endl;
    float media=CalculaMedia(notas);
    int maior=ComparaNotas(notas,'+');
    int menor=ComparaNotas(notas,'-');
    cout << fixed << setprecision(2) << media << " " << maior << " " << menor;
    cout <<endl;
}