#include "PokemonEletrico.hpp"
#include <string>
#include <iostream>
using namespace std;

    PokemonEletrico:: PokemonEletrico(string nome, string tipo_ataque, double forca_ataque, double _potencia_raio)
    {
        this->setNome(nome);
        this->setTipo(tipo_ataque);
        this->setForca(forca_ataque);
        this->_potencia_raio=_potencia_raio;
    }

    void PokemonEletrico::falar_tipo_ataque()
    {
        cout<<this->getTipo()<<"!"<<endl;
        cout<<"Bzzzz!"<<endl;
    }

    double PokemonEletrico::calcular_dano() { return(this->ataque_eletrico()); }
    
    double PokemonEletrico::ataque_eletrico() { return (this->getForca()+this->_potencia_raio); }

