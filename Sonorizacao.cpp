/* Sonorizacao.cpp */

#include <string>
#include "Sonorizacao.h"
#include "ItemVenda.h"

using namespace std;

Sonorizacao::Sonorizacao(string tipo, double valor) : ItemVenda(valor)
   {
   this->tipo = tipo;
   };
   
string Sonorizacao::getDescricao()
   { 
   return ("Sonorizacao " + tipo + " "); 
   };
   
/* fim de arquivo */