// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_pokemon.hpp"
#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonExplosivo.hpp"
#include "Treinador.hpp"
#include "Campeonato.hpp"
#include <iostream>
#include <string> 

int main() 
{
    char leitura='\0';
    Campeonato c;
    while ((leitura=getchar())!=EOF)
    {
        switch (leitura)
        {
            case 't':
            {
                string nome;
                cin>>nome;
                c.cadastrar_treinador(nome);
                break;
            }

            case 'i':
            {
                int idt;
                cin>>idt;
                c.imprimir_informacoes_treinador(idt); 
                break;
            }

            case 'e':
            {
                int idt;
                string nome, tipo_ataque;
                double forca_ataque,potencia_raio;
                cin>>idt;
                cin>>nome;
                cin>>tipo_ataque;
                cin>>forca_ataque;
                cin>>potencia_raio;
                c.cadastrar_pokemon_eletrico(idt,nome,tipo_ataque,forca_ataque,potencia_raio);
                break;
            }

            case 'q':
            {
                int idt;
                string nome, tipo_ataque;
                double forca_ataque,litros_jato;
                cin>>idt;
                cin>>nome;
                cin>>tipo_ataque;
                cin>>forca_ataque;
                cin>>litros_jato;
                c.cadastrar_pokemon_aquatico(idt,nome,tipo_ataque,forca_ataque,litros_jato);
                break;   
            }

            case 'x':
            {
                int idt;
                string nome, tipo_ataque;
                double forca_ataque,temperatura_explosao;
                cin>>idt;
                cin>>nome;
                cin>>tipo_ataque;
                cin>>forca_ataque;
                cin>>temperatura_explosao;
                c.cadastrar_pokemon_explosivo(idt,nome,tipo_ataque,forca_ataque,temperatura_explosao); 
                break;   
                
            }
            case 'h':
            {
                int idt1,idt2,idpk1,idpk2;
                cin>>idt1;
                cin>>idpk1;
                cin>>idt2;
                cin>>idpk2;
                c.executar_batalha(idt1,idpk1,idt2,idpk2);
                break;
            }
            case 'b':
            {
                avaliacao_basica();
                break;
            }
        }
    }

    return 0;
}