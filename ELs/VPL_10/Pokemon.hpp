#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;
class Pokemon
{
private:
    string nome;
    string _tipo_ataque;
    double _forca_ataque;
    double _energia = 100;
public:
    Pokemon();
    Pokemon(string nome,string _tipo_ataque,double _forca_ataque);
    void setNome(string nome);
    void setTipo(string tipo);
    void setForca(double forca);
    string getNome();
    string getTipo();
    double getForca();
    void falar_nome();
    virtual void falar_tipo_ataque();
    void imprimir_status();
    void imprimir_informacoes();
    virtual double calcular_dano();
    void atacar (Pokemon* outro_pokemon);
    void receber_dano(double valor_dano);
};
#endif