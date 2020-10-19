#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    std::string nome;

  private:    
	int projetos;

  public:
    void setProjetos (int projetos);
    int getProjetos ();
	
};

#endif
