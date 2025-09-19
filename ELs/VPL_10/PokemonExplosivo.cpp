#include "PokemonExplosivo.hpp"
#include <string>
#include <iostream>
using namespace std;

    PokemonExplosivo::PokemonExplosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
    {
        this->setNome(nome);
        this->setTipo(tipo_ataque);
        this->setForca(forca_ataque);
        this->_temperatura_explosao=_temperatura_explosao;
    }

    void PokemonExplosivo::falar_tipo_ataque()
    {
        cout<<this->getTipo()<<"!"<<endl;
        cout<<"Boom!"<<endl;
    }

    double PokemonExplosivo::calcular_dano() { return(this->ataque_explosivo()); }
    
    double PokemonExplosivo::ataque_explosivo() { return (this->getForca()+this->_temperatura_explosao); }