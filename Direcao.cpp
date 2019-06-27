/* Direcao.cpp */

#include <string>
#include "Direcao.h"
#include "ItemVenda.h"

using namespace std;

Direcao::Direcao(string tipo, double valor) : ItemVenda(valor)
   {
   this->tipo = tipo;
   };
   
string Direcao::getDescricao()
   { 
   return ("Direcao " + tipo + " "); 
   };
   
/* fim de arquivo */

   