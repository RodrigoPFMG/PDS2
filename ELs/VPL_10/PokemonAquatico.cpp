#include "PokemonAquatico.hpp"
#include <string>
#include <iostream>
using namespace std;

    PokemonAquatico::PokemonAquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato)
    {
        this->setNome(nome);
        this->setTipo(tipo_ataque);
        this->setForca(forca_ataque);
        this->_litros_jato=litros_jato;
    }

    void PokemonAquatico::falar_tipo_ataque()
    {
        cout<<this->getTipo()<<"!"<<endl;
        cout<<"Splash!"<<endl;
    }

    double PokemonAquatico::calcular_dano() { return(this->ataque_aquatico()); }
    
    double PokemonAquatico::ataque_aquatico() { return (this->getForca()+this->_litros_jato); }