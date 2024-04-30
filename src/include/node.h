#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node {

private:
  T value;
  Node *left, *right;

public:
  Node();
  ~Node();

  T* get_left();
  T* get_right();

  void set_left(T value);
  void set_left(T *value);

  void set_right(T value);
  void set_right(T *value);
  
  
};

#endif
