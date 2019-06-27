
/* Criação da ConcessionariaModerna.h */

#ifndef CONCESSIONARIAMODERNA_H

#define CONCESSIONARIAMODERNA_H

#include <string.h>
#include "Concessionaria.h"

using namespace std;

class ConcessionariaModerna : public Concessionaria{
	
	private:
	string facebook;
	string whatsapp;
	string twitter;
	string site;


	public: 
	ConcessionariaModerna(string nome, string endereco, string cidade, string estado, 
	string fone,string whatsapp, string facebook, string twitter, string site);            //Concessionaria moderna tem que ter os atributos da Concessionária Mãe
	  const virtual string getFacebook(); 
      const virtual string getWhatsapp();
      const virtual string getTwitter();
      const virtual string getSite();


};

#endif

/* fim de arquivo */





