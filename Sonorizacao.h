/* Sonorizacao.h */

#ifndef SONORIZACAO_H

#define SONORIZACAO_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Sonorizacao : public ItemVenda
   {
   private:
      string tipo;
      
   public:
      Sonorizacao(string, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */




   