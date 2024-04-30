#ifndef REGISTRO_H
#define REGISTRO_H

#include <iostream>
#include <chrono>

static int SEQUENCE_ID_REGISTRO = 0;

class Registro {

  
public:
  std::time_t dataAvaliacao;
  double temperatura;
  double peso;
  int altura;
  bool amostraSanguineaColetada;
  bool exameFisicoOk;

private:

  // construtor

  Registro();
  
  
  // métodos de acesso

  time_t get_data_avaliacao();
  void set_data_avaliacao(time_t data_avaliacao);

  double get_temperatura();
  void set_temperatura(double temperatura);

  double get_peso();
  void set_peso(double peso);

  int get_altura();
  void set_altura(int altura);

  bool is_amostra_sangue_coletada();
  void set_amostra_sangue_coletada(bool isAmostraSangueColetada);

  bool is_exame_fisico_ok();
  void set_exame_fisico_is_ok(bool isAmostraSangueColetada);
  
};

#endif
