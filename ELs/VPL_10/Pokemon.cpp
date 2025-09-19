#include "Pokemon.hpp"
#include <string>
#include <iostream>
using namespace std;

    Pokemon::Pokemon(){};
    Pokemon::Pokemon(string nome,string _tipo_ataque,double _forca_ataque)
    {
      this->nome=nome;
      this->_tipo_ataque=_tipo_ataque;
      this->_forca_ataque=_forca_ataque; 
    }

    void Pokemon ::setNome(string nome) { this->nome=nome; }
    
    void Pokemon :: setTipo(string tipo) { this->_tipo_ataque=tipo; }
    
    void Pokemon :: setForca(double forca) { this->_forca_ataque=forca; }

    string Pokemon :: getNome() {return this->nome; }

    string Pokemon :: getTipo() {return this->_tipo_ataque; }

    double Pokemon :: getForca() {return this->_forca_ataque;} 
    
    void Pokemon:: falar_nome() { cout<<this->nome<<"!"<<endl; }
    
    void Pokemon :: falar_tipo_ataque()
    {}

    void Pokemon ::imprimir_status()
    {
        cout<<this->nome<<"!"<<endl;
        cout<<"Energia: "<<this->_energia<<endl;
    }

    void Pokemon :: imprimir_informacoes()
    {
        cout<<"Pokemon: "<<this->nome<<endl;
        cout<<"Tipo ataque: "<<this->_tipo_ataque<<endl;
        cout<<"Dano: "<<this->calcular_dano()<<endl;
        cout<<"Energia: "<<this->_energia<<endl;
    }

    double Pokemon :: calcular_dano()
    {return 0;}

    void Pokemon :: atacar (Pokemon* outro_pokemon)
    {
        this->falar_nome();
        this->falar_tipo_ataque();
        cout<<"Dano: "<<calcular_dano()<<endl;
        outro_pokemon->receber_dano(calcular_dano());
    }

    void Pokemon :: receber_dano(double valor_dano)
    {
        this->_energia-= valor_dano;
        if (this->_energia<=0) 
        {
            this->_energia=0;
            cout<<this->nome<<" morreu!"<<endl;
        }
        else this->imprimir_status();
    }

