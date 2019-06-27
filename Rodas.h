/* Rodas.h */

#ifndef RODAS_H

#define RODAS_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Rodas: public ItemVenda
   {
   private:
      string acabamento;
      bool diamantado;
      int aro;
    

   public:
      Rodas(string, bool, int, double);
      virtual string getDescricao();


   };
   
#endif
   
/* fim de arquivo */