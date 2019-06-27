/* Rodas.cpp */

#include <string>
#include "Rodas.h"
#include "ItemVenda.h"

using namespace std;

Rodas::Rodas(string acabamento, bool diamantado, int aro, double valor) : ItemVenda(valor)
   {
   this->acabamento = acabamento;
   this->diamantado = diamantado;
   this->aro = aro;

   };
   
string Rodas::getDescricao()
   { 

   return ("Rodas " + acabamento + " " + (diamantado ? "diamantado" : "fosco") + ", Aro" + " "+ to_string(aro) );

   };
   
/* fim de arquivo */



