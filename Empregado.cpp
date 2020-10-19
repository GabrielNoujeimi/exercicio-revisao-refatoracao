#include <iostream>
#include <string>
# include "Empregado.hpp"
# define TrabalhoDiario 8

double Empregado::pagamentoMes(double horasTrabalhadas) {
   
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
     double horaExtra = horasTrabalhadas - TrabalhoDiario;
     horasTrabalhadas += horaExtra / 2;
     }
	return horasTrabalhadas * salarioHora;
}

void Empregado::setSalarioHora(double salarioHora){
    this->salarioHora =  salarioHora;
}
