#ifndef ANIMAL_H
#define ANIMAL_H 

#include <iostream>
#include <chrono>

#include "historico.h"

static int SEQUENCE_ID_ANIMAL = 0;

class Animal {

private:

  int id;
  std::string apelido;
  std::time_t dataInicioMonitoramento;
  std::string especie;
  char sexo;
  std::time_t dataNascimento;
  Historico *historico;
  
public:

  // construtor/destrutor
  
  Animal();
  ~Animal();

  // métodos funcionais
  
  
  
  // métodos de acesso
  int get_id();
  void set_id(int id);

  std::string get_apelido();
  void set_apelido(std::string apelido);

  std::time_t get_data_inicio_monitoramento;
  void set_data_inicio_monitoramento(std::time_t data_inicio_monitoramento);

  std::string get_especie();
  void set_especie(std::string especie);

  char get_sexo();
  void set_sexo(char sexo);

  std::time_t get_data_nascimento();
  void set_data_nascimento(std::time_t data_nascimento);
  
  
};

#endif
