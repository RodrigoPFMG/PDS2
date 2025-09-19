#ifndef POKEMON_ELETRICO_H
#define POKEMON_ELETRICO_H
#include <string>
#include "Pokemon.hpp"
using namespace std;
class PokemonEletrico : public Pokemon
{
private:
    double _potencia_raio;
public:
    PokemonEletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio);
    void falar_tipo_ataque()override;
    double calcular_dano()override;
    double ataque_eletrico();
};
#endif