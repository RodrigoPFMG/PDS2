#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>
using namespace std;

   struct ContaBancaria {
      int id;
      string cliente;  
      float saldo;

   ContaBancaria (int id, string cliente);
   void Deposito (int valor);
   void Saque (int valor);
   void Pix (ContaBancaria* destino, int valor);
   void Imprime ();
   };
#endif