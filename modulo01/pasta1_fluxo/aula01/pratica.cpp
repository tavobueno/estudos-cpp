/*
Crie um programa em pratica.cpp que:

    Comece com o número 10.

    Use um while para contar de 10 até 1, diminuindo de 1 em 1.

    Ao final, exiba: "Contagem regressiva encerrada!"
*/

#include <iostream>

int main(){
  int number = 10;
  while(number >= 1){
    std::cout << number << std::endl;
    number--;
  }

  std::cout << "Contagem regressiva encerrada!" << std::endl;

  return 0;
}
