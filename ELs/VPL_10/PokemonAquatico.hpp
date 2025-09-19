#ifndef POKEMON_AQUATICO_H
#define POKEMON_AQUATICO_H
#include <string>
#include "Pokemon.hpp"
using namespace std;
class PokemonAquatico : public Pokemon
{
private:
    double _litros_jato;
public:
    PokemonAquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato);
    void falar_tipo_ataque()override;
    double calcular_dano()override;
    double ataque_aquatico();
};
#endif