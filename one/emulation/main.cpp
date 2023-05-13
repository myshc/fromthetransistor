#include "verilated.h"
#include "Vhello.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Vhello *hello = new Vhello;
  
  hello->eval();

  delete hello;
  return 0;
}
