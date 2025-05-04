/*
Crie um programa que:
    Pergunte ao usuário quantas horas ele estudou hoje.

    Use estruturas de decisão para responder:

        Se estudou menos que 2 horas: "Você precisa estudar mais!"

        Entre 2 e 4 horas: "Bom trabalho, continue assim!"

        Mais de 4 horas: "Você está se tornando imparável!"
*/

#include <iostream>

int main(){
  float horasEstudadas;

  std::cout << "Quantas horas você estudou hoje? ";
  std::cin >> horasEstudadas;

  if(horasEstudadas < 2){
    std::cout << "Você precisa estudar mais!";
    std::cout << std::endl;
  }else if(horasEstudadas >= 4){
    std::cout << "Você está se tornando imparável!";
    std::cout << std::endl;
  }else{
    std::cout << "Bom trabalho, continue assim!";
  }

  return 0;
}
