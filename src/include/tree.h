#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "node.h"

template <typename T>
class Tree {


private:
  Node<T> *root;

public:

  Node<T>* get_root();
  
  
};

#endif
