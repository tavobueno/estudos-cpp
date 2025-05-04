/*
Crie um programa que:

    Peça a idade e o tempo de estudo do usuário.

    Responda:

        Se a pessoa é menor de idade E estuda menos de 2h, diga:
        "Você é jovem e precisa estudar mais!"

        Se a pessoa é maior de idade OU estuda mais de 4h, diga:
        "Você está em um bom caminho!"

        Caso contrário, diga:
        "Continue se esforçando!"
*/

#include <iostream>
int main(){
  int idade;
  float horasEstudadas;

  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  std::cout << "Digite quantas horas você estudou hoje: ";
  std::cin >> horasEstudadas;

  if(idade < 18 && horasEstudadas < 2){
    std::cout << "Você é jovem e precisa estudar mais!";
    std::cout << std::endl;
  }else if(idade >= 18 || horasEstudadas >= 4){
    std::cout << "Você está em um bom caminho!";
    std::cout << std::endl;
  }else{
    std::cout << "Continue se esforçando!";
    std::cout << std::endl;
  }

  return 0;
}
