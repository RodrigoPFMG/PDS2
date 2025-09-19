#include "Treinador.hpp"
#include <string>
#include <iostream>
using namespace std;


    Treinador::Treinador(string nome) { this->_nome=nome; }
     
    string Treinador::getNome()  { return (this->_nome); }
   
    string Treinador::getPokemon(int id)  { return (this->_pokemons[id]->getNome()); }

    void Treinador::cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio)
    {
        Pokemon* p= new PokemonEletrico(nome,tipo_ataque,forca_ataque,potencia_raio);
        this->_pokemons.push_back(p);
    }

    void Treinador::cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato)
    {
        Pokemon* p= new PokemonAquatico(nome,tipo_ataque,forca_ataque,litros_jato);
        this->_pokemons.push_back(p);
    }

    void Treinador::cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
    {
        Pokemon* p= new PokemonExplosivo(nome,tipo_ataque,forca_ataque,temperatura_explosao);
        this->_pokemons.push_back(p);
    }

    Pokemon* Treinador::usar_pokemon (int idpk) { return this->_pokemons[idpk];  }
    
    void Treinador::imprimir_informacoes()
    {
        if (this->_pokemons.empty())
        {
            cout<< "Nome: "<<this->_nome<<endl;
            cout<<"----------"<<endl;
            cout<<"Nenhum Pokemon cadastrado!"<<endl;
            cout<<"----------"<<endl;
        }
        else
        {
            cout<< "Nome: "<<this->_nome<<endl;
            cout<<"----------"<<endl;
            for(Pokemon* p:this->_pokemons)
            {
                p->imprimir_informacoes();
                cout<<"----------"<<endl;
            } 
        }
    }