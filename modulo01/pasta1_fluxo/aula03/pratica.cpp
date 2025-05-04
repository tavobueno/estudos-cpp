/*
Crie um programa que:

    Use o laço `for` para contar de 1 até 20.

    A cada número, imprima ele na tela.

    Ao final, exiba: "Contagem finalizada!"
*/
#include <iostream>
int main(){
  for(int n = 1; n <= 20; n++){
    std::cout << n << std::endl;
  }

  std::cout << "Contagem finalizada!" << std::endl;

  return 0;
}
