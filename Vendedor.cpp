#include <string>
#include "Vendedor.hpp"
#include "Empregado.hpp"
#define MESES 12
	
double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * MESES;
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
    this->quotaMensalVendas =  quotaMensalVendas;
}

