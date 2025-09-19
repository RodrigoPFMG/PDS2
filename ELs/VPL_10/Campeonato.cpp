#include <string>
#include <vector>
#include "Campeonato.hpp"
#include <iostream>
using namespace std;

    void Campeonato::cadastrar_treinador(string nome)
    {
        Treinador* t= new Treinador(nome);
        this->_treinadores.push_back(t);
    }

    void Campeonato::cadastrar_pokemon_eletrico(int idt,string nome, string tipo_ataque, double forca_ataque, double potencia_raio)
    {
        this->_treinadores[idt]->cadastrar_pokemon_eletrico(nome,tipo_ataque,forca_ataque,potencia_raio);
    }

    void Campeonato::cadastrar_pokemon_aquatico(int idt, string nome, string tipo_ataque, double forca_ataque, double litros_jato)
    {
        this->_treinadores[idt]->cadastrar_pokemon_aquatico(nome,tipo_ataque,forca_ataque,litros_jato);
    }

    void Campeonato::cadastrar_pokemon_explosivo(int idt, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
    {
        this->_treinadores[idt]->cadastrar_pokemon_explosivo(nome,tipo_ataque,forca_ataque,temperatura_explosao);
    }

    void Campeonato::imprimir_informacoes_treinador(int idt)
    {
        this->_treinadores[idt]->imprimir_informacoes();
    }

    void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2)
    {
        cout<<"### Batalha ###"<<endl;
        cout<<this->_treinadores[idt1]->getNome()<<" ("<<this->_treinadores[idt1]->getPokemon(idpk1)<<") ";
        cout<<"vs. ";
        cout<<this->_treinadores[idt2]->getNome()<<" ("<<this->_treinadores[idt2]->getPokemon(idpk2)<<") "<<endl;
        Pokemon*p1=this->_treinadores[idt1]->usar_pokemon(idpk1);
        Pokemon*p2=this->_treinadores[idt2]->usar_pokemon(idpk2);
        p1->atacar(p2);
        cout<<"#########"<<endl;
    }