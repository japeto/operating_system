#include <iostream>
#include "Allocation.h"
int main(){

  int method;
  std::cin >> method;
  Allocation *allocation = new Allocation();
  allocation->capture_positions();
  allocation->capture_process();
  allocation->define_method(method);
  allocation->execute();
}
