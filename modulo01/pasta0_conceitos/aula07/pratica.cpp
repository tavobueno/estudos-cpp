/*Crie um programa que:

    Mostre um menu com as seguintes opções:

        1 - Jogar xadrez

        2 - Estudar C++

        3 - Ler um livro

        4 - Dormir

    Peça para o usuário digitar o número da opção desejada.

    Use um switch para imprimir uma mensagem diferente para cada escolha, como:

        "Hora de pensar estrategicamente!"

        "Codando rumo ao topo!"

        "Expandindo sua mente..."

        "Hora de descansar o cérebro."

    Se o usuário digitar um número inválido, mostre:
    "Opção desconhecida. Tente novamente."
*/

#include <iostream>

int main(){
  int opcao;

  std::cout << "\nBem vindo ao seu menu.\n"
            << "Selecione uma das opções:"
            << "1 - Jogar xadrez\n2 - Estudar C++\n3 - Ler um livro\n4 - Dormir"
            << "\n-> "
            << std::endl;
  std::cin >> opcao;

  switch (opcao)
  {

    case 1:
  std::cout << "Hora de pensar estrategicamente!";
    break;

    case 2:
      std::cout << "Codando rumo ao topo!";
      break;

    case 3:
      std::cout << "Expandindo sua mente...";
      break;

    case 4:
      std::cout << "Hora de descansar o cérebro...";
      break;
  default:
      std::cout << "Opção desconhecida. Tente novamente.";
    break;
  }

  std::cout << std::endl;

  return 0;
}
