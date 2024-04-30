#ifndef HISTORICO_H
#define HISTORICO_H

#include <iostream>
#include <vector>

#include "registro.h"


static int SEQUENCE_ID_HISTORICO = 0;

class Historico {

private:

  std::vector<Registro> registros;

public:

  bool adicionar_registro(Registro *registro);

  Registro* buscar_registro(int id);
  Registro* buscar_registro(Registro registro);
  
  bool remover_registro(int id);
  bool remover_registro(Registro registro);
  
  
};

#endif
