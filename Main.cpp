/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

/* Alteração feita na main de  Concessionaria para ConcessionariaModerna */

#include <iostream>
#include "Sistema.h"
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"

int main(int argc, char* argv[])
  {
  try
     {
     ConcessionariaModerna * cliente = new ConcessionariaModerna("Auto-FT Veiculos S.A.",
      "R. Paschoal Marmo, 1888", "Limeira", "SP", "+55 19 2113-3306",
      "+55 19 99113-3306", "www.facebook.com/Auto_FT_Veiculos", 
      "www.twitter.com/Auto_FT_Veiculos", "www.autoftveiculos.com.br" );
     Sistema * programa = new Sistema(cliente);
     programa->processa();
     delete cliente;
     }
  catch(exception& excecao)
     {
     cerr << "Ocorreu um problema: " << excecao.what();
     };
  };
  

/* fim de arquivo */