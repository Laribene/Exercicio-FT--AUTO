/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include <vector>
#include <iostream>

#include "Sistema.h"
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"
#include "ItemVenda.h"
#include "Direcao.h"
#include "Sonorizacao.h"
#include "Rodas.h"
#include "Automovel.h"
#include "Motor.h"
#include "Cambio.h"
#include "Cor.h"
#include "Menu.h"

using namespace std;

Sistema::Sistema(ConcessionariaModerna* cliente)
   {
   this->cliente = cliente;
   boasVindas();
   carregarEstoque();
   orcamento.clear();
   };

Sistema::~Sistema()
   {
   vector<ItemVenda *>::iterator varre;

   orcamento.clear(); // nao usar delete nos itens, pois sao so copias!!!
   
   varre = carros.begin();
   while(varre != carros.end())
      {
      delete(*varre++);	
      };
   carros.clear();
   
   varre = motores.begin();
   while(varre != motores.end())
      {
      delete(*varre++);	
      };
   motores.clear();  

   varre = cambios.begin();
   while(varre != cambios.end())
      {
      delete(*varre++);	
      };
   cambios.clear();  

   varre = cores.begin();
   while(varre != cores.end())
      {
      delete(*varre++);	
      };
   cores.clear();  

   varre = direcoes.begin();
   while(varre != direcoes.end())
      {
      delete(*varre++); 
      };
   direcoes.clear();

   varre = sonorizacoes.begin();
   while(varre != sonorizacoes.end())
      {
      delete(*varre++); 
      };
   sonorizacoes.clear();
   

   varre = rodas.begin();
   while(varre != rodas.end())
      {
      delete(*varre++); 
      };
   rodas.clear();
   };



void Sistema::boasVindas()
   {
   cout << endl << endl;
   cout << "*********************************" << endl;
   cout << cliente->getNome() << endl;
   cout << cliente->getEndereco() << endl;
   cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
   cout << cliente->getFone() << endl;
    cout << cliente->getWhatsapp() << endl;
   cout << cliente->getFacebook() << endl;
   cout << cliente->getTwitter() << endl;
   cout << cliente->getSite() << endl;
   cout << "*********************************" << endl << endl;
   };
   
void Sistema::carregarEstoque()
   {
   carros.clear();
   carros.insert(carros.end(), new Automovel("GM", "Cruze Sedan",  2015, 107000.00));
   carros.insert(carros.end(), new Automovel("GM", "Cruze Hatch",  2015,  75000.00));
   carros.insert(carros.end(), new Automovel("GM", "Prisma Sedan", 2015,  65000.00));
   carros.insert(carros.end(), new Automovel("GM", "Onix Hatch",   2015,  40000.00));
   carros.insert(carros.end(), new Automovel("GM", "Celta Hatch",  2015,  30000.00));

   motores.clear();
   motores.insert(motores.end(), new Motor(1.8, 16, "gasolina", 3300.00));
   motores.insert(motores.end(), new Motor(1.8, 16, "flex", 3500.00));
   motores.insert(motores.end(), new Motor(1.8,  8, "flex", 3000.00));
   motores.insert(motores.end(), new Motor(1.6, 16, "flex", 2800.00));
   motores.insert(motores.end(), new Motor(1.6,  8, "flex", 2300.00));
   motores.insert(motores.end(), new Motor(1.4, 16, "flex", 2600.00));
   motores.insert(motores.end(), new Motor(1.4,  8, "flex", 2000.00));
   motores.insert(motores.end(), new Motor(1.0, 16, "flex", 2400.00));
   motores.insert(motores.end(), new Motor(1.0,  8, "flex", 0.00));

   cambios.clear();
   cambios.insert(cambios.end(), new Cambio("Automatico", 7, 7500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 6, 4500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 5, 4000.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 6, 2500.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 5, 0.0));

   
   cores.clear();
   cores.insert(cores.end(), new Cor("Branco", false, 0.0));
   cores.insert(cores.end(), new Cor("Vermelho", false, 200.0));
   cores.insert(cores.end(), new Cor("Preto", false, 200.0));
   cores.insert(cores.end(), new Cor("Azul", false, 100.0));
   cores.insert(cores.end(), new Cor("Prata", true, 350.0));
   cores.insert(cores.end(), new Cor("Cinza", true, 250.0));
   cores.insert(cores.end(), new Cor("Vermelho", true, 450.0));
   cores.insert(cores.end(), new Cor("Azul", true, 250.0));

/* Criação de vários objetos de cada uma destas três classes no método 
                  Sistema::carregarEstoque() */

   direcoes.clear();
   direcoes.insert(direcoes.end(), new Direcao("Mecanica", 0.0));
   direcoes.insert(direcoes.end(), new Direcao("Hidraulica", 1000.0));
   direcoes.insert(direcoes.end(), new Direcao("Eletrica", 5000.0));

   sonorizacoes.clear();
   sonorizacoes.insert(sonorizacoes.end(), new Sonorizacao("Alto Falante Coaxial", 2000.00));
   sonorizacoes.insert(sonorizacoes.end(), new Sonorizacao("Alto Falante Triaxial", 5000.00));
   sonorizacoes.insert(sonorizacoes.end(), new Sonorizacao("Alto Falante Quadriaxial", 10000.00 ));

   rodas.clear();
   rodas.insert(rodas.end(), new Rodas("Preto",false, 13, 150.0));
   rodas.insert(rodas.end(), new Rodas("Preto",false, 16, 300.0));
   rodas.insert(rodas.end(), new Rodas("Preto",false, 22, 560.0));
   rodas.insert(rodas.end(), new Rodas("Grafite",false, 13, 150.0));
   rodas.insert(rodas.end(), new Rodas("Grafite",false, 16, 300.0));
   rodas.insert(rodas.end(), new Rodas("Grafite",false, 22, 560.0));
   rodas.insert(rodas.end(), new Rodas("Preto", true, 13, 150.0));
   rodas.insert(rodas.end(), new Rodas("Preto", true, 16, 300.0));
   rodas.insert(rodas.end(), new Rodas("Preto", true, 22, 560.0));
   rodas.insert(rodas.end(), new Rodas("Branco", true, 13, 150.0));
   rodas.insert(rodas.end(), new Rodas("Branco", true, 16, 300.0));
   rodas.insert(rodas.end(), new Rodas("Branco", true, 22, 560.0));
   rodas.insert(rodas.end(), new Rodas("Prata", true, 13, 150.0));
   rodas.insert(rodas.end(), new Rodas("Prata", true, 16, 300.0));
   rodas.insert(rodas.end(), new Rodas("Prata", true, 22, 560.0));
   };

void Sistema::processa()
   {
   vector<string> opcoes({ "Sair do Sistema", "Iniciar Venda", "Imprimir Orcamento" });
   Menu menu("Menu Principal", opcoes);
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
   
      switch(escolha)
         {
 	 case 1: { iniciarVenda();  }; break;
 	 case 2: { imprimirOrcto(); }; break;
    //case 3: { boasVindas();    }; break;

         };
      };
   };

   /* Alteração no Sistema::iniciarVenda() para solicitar estes acessórios também*/
void Sistema::iniciarVenda()
   {
   orcamento.clear();
   cout << "------------------------------\nNOVA VENDA\n------------------------------\n";
   
   orcamento.insert(orcamento.end(), escolheAutomovel());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheMotor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCambio());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheDirecao());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheSonorizacao());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheRodas());
   listarConfiguracao();

   cout << "------------------------------\nCONFIGURACAO COMPLETADA\n------------------------------\n";
   };

void Sistema::listarConfiguracao()
   {
   cout << "------------------------------\nConfiguracao escolhida:\n------------------------------\n";
  
   vector<ItemVenda *>::iterator varre = orcamento.begin();
   
   while(varre != orcamento.end())
      {
      cout << "  @ " << (*varre)->getDescricao() << "\n\tR$ " << (*varre)->getValor() << endl;
      varre++;
      };
   };
   
ItemVenda * Sistema::escolheAutomovel()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = carros.begin();
   
   while(varre != carros.end())
      {
      opcoes.push_back((*varre++)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));	
      };
   Menu menu("Modelos disponiveis", opcoes);

   return (carros.at(menu.getEscolha()));  
   };         

ItemVenda * Sistema::escolheMotor()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = motores.begin();
   
   while(varre != motores.end())
      {
      opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));	
      varre++;
      };
   Menu menu("Motorizacoes disponiveis", opcoes);

   return (motores.at(menu.getEscolha()));  
   };         
   
ItemVenda * Sistema::escolheCambio()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cambios.begin();
   
   while(varre != cambios.end())
      {
      opcoes.push_back((*varre++)->getDescricao()+ " por R$ " + to_string((*varre)->getValor()));	
      };
   Menu menu("Cambios disponiveis", opcoes);

   return (cambios.at(menu.getEscolha()));  
   };         

ItemVenda * Sistema::escolheCor()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cores.begin();
   
   while(varre != cores.end())
      {
      opcoes.push_back((*varre++)->getDescricao()+ " por R$ " + to_string((*varre)->getValor()));	
      };
   Menu menu("Cores disponiveis", opcoes);

   return (cores.at(menu.getEscolha()));  
   };         

ItemVenda * Sistema::escolheDirecao()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = direcoes.begin();
   
   while(varre != direcoes.end())
      {
      opcoes.push_back((*varre++)->getDescricao() + "por R$ " + to_string((*varre)->getValor()));   
      };
   Menu menu("Direçoes disponiveis", opcoes);

   return (direcoes.at(menu.getEscolha()));  
   };   

ItemVenda * Sistema::escolheSonorizacao()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = sonorizacoes.begin();
   
   while(varre != sonorizacoes.end())
      {
      opcoes.push_back((*varre++)->getDescricao() + "por R$ " + to_string((*varre)->getValor()));   
      };
   Menu menu("Sonorizações disponiveis", opcoes);

   return (sonorizacoes.at(menu.getEscolha()));  
   };         

   ItemVenda * Sistema::escolheRodas()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = rodas.begin();
   
   while(varre != rodas.end())
      {
      opcoes.push_back((*varre++)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));   
      };
   Menu menu("Rodas disponiveis", opcoes);

   return (rodas.at(menu.getEscolha()));  
   };    
   
void Sistema:: imprimirOrcto()
   {

  cout << endl << endl;
   cout << "*********************************" << endl;
   cout << cliente->getNome() << endl;
   cout << cliente->getEndereco() << endl;
   cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
   cout << cliente->getFone() << endl;
    cout << cliente->getWhatsapp() << endl;
   cout << cliente->getFacebook() << endl;
   cout << cliente->getTwitter() << endl;
   cout << cliente->getSite() << endl;
   cout << "*********************************" << endl << endl;

   cout << "**********************************************************" << endl;
 vector<ItemVenda *>::iterator varre = orcamento.begin();
   float orcament = 0.00;

   while(varre != orcamento.end())
      {
      cout << "  @ " << (*varre)->getDescricao() << "\tR$ " << (*varre)->getValor() << endl;
      orcament += (*varre)->getValor();
      varre++;
      };
   cout << "\n\tO orcamento total é de: R$ "<< orcament << endl;
   cout << "**********************************************************" << endl << endl;
   };
   
/* fim de arquivo */
