#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
	
  public:
    std::string nome;

  private:
    double quotaMensalVendas;

  public:
    void setQuotaMensalVendas(double quotaMensalVendas);
	double quotaTotalAnual();

	
};

#endif
