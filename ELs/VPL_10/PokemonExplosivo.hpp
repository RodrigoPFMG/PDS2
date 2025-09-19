#ifndef POKEMON_EXPLOSIVO_H
#define POKEMON_EXPLOSIVO_H
#include <string>
#include "Pokemon.hpp"
using namespace std;
class PokemonExplosivo : public Pokemon
{
private:
    double _temperatura_explosao;
public:
     PokemonExplosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao);
    void falar_tipo_ataque()override;
    double calcular_dano()override;
    double ataque_explosivo();
};
#endif