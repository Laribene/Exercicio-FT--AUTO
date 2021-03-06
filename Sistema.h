/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SISTEMA_H

#define SISTEMA_H

#include <string>
#include <vector>

#include "ItemVenda.h"
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"

using namespace std;

class Sistema
   {
   private:
      vector<ItemVenda *> carros;
      vector<ItemVenda *> motores;
      vector<ItemVenda *> cambios;
      vector<ItemVenda *> cores;
      vector<ItemVenda *> direcoes;
      vector<ItemVenda *> sonorizacoes;
      vector<ItemVenda *> rodas;

      vector<ItemVenda *> orcamento;
      
      ConcessionariaModerna * cliente;
      
      void boasVindas();
      void carregarEstoque();
      void iniciarVenda();
      void imprimirOrcto();
      void listarConfiguracao();

      ItemVenda * escolheAutomovel();
      ItemVenda * escolheMotor();
      ItemVenda * escolheCambio();
      ItemVenda * escolheCor();
      ItemVenda * escolheDirecao();
      ItemVenda * escolheSonorizacao();
      ItemVenda * escolheRodas();

      
   public:
      Sistema(ConcessionariaModerna *);
      ~Sistema();
      void processa();
   };
   
#endif
   
   
/* fim de arquivo */