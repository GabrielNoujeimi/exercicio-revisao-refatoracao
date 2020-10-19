#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado {
	
  private:
    double salarioHora;
      
  public:
    double pagamentoMes(double horasTrabalhadas);
    void setSalarioHora(double salarioHora);
	
};

#endif
