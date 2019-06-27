/* Direcao.h */

#ifndef DIRECAO_H

#define DIRECAO_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Direcao: public ItemVenda
   {
   protected:
      string tipo;

   public:
      Direcao(string, double);
      virtual string getDescricao();


   };
   
#endif
   
/* fim de arquivo */



   