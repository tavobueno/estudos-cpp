/*
Crie um programa que:

    Pergunte a idade do usuário.

    Use o operador ternário para dizer se ele pode ou não tirar carteira de motorista.

        A mensagem deve ser:

            "Você já pode tirar sua carteira de motorista!" se a idade for 18 ou mais.

            "Ainda não pode tirar carteira." se for menor.
*/

#include <iostream>

int main(){
  int idade;
  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  std::string mensagem = (idade >= 18) ? "Você já pode tirar sua carteira!" : "Você não pode tirar a carteira (menor de idade).";

  std::cout << mensagem << std::endl;

  return 0;
}
