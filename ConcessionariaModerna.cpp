
/* Criação da Classe ConcessionariaModerna derivada de Concessionária */

#include <string>
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"

using namespace std;

ConcessionariaModerna::ConcessionariaModerna(string nome, string endereco, 
string cidade, string estado, string fone,string whatsapp, string facebook, 
string twitter, string site) :  Concessionaria(nome, endereco, cidade, estado, fone)
   {
   this->whatsapp = whatsapp;
   this->facebook = facebook;
   this->twitter = twitter;
   this->site = site;
   };

const string ConcessionariaModerna::getWhatsapp() { return (whatsapp); };
const string ConcessionariaModerna::getFacebook()     { return (facebook); };
const string ConcessionariaModerna::getTwitter()   { return (twitter); };
const string ConcessionariaModerna::getSite()   { return (site); };

/* fim de arquivo */

