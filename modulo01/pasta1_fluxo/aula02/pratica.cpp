/*
Tarefa:

Crie um programa pratica.cpp que:

    Comece com o número 1.

    Use um while para contar até 10, aumentando de 1 em 1.

    Após o fim da contagem, exiba:
    "Contagem crescente encerrada!"
*/
#include <iostream>
int main(){
  int number = 1;
  while(number <= 10){
    std::cout << number << std::endl;
    number++;
  }

  std::cout << "Contagem crescente encerrada!" << std::endl;

  return 0;
}
