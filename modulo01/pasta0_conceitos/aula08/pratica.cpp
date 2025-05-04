/*
/*
Crie um programa que:

1. Mostre o seguinte menu repetidamente:

    ===== MENU =====
    1 - Ver progresso
    2 - Estudar mais
    3 - Jogar xadrez
    4 - Sair

2. Peça uma opção ao usuário.

3. Só pare o programa quando a opção 4 (Sair) for escolhida.
*/

#include <iostream>

int main(){
  std::string menu = "===== MENU =====\n1 - Ver progresso\n2 - Estudar mais\n3 - Jogar xadrez\n4 - Sair\n-> ";

  int opcao;

  while(opcao != 4){
    std::cout << menu;
    std::cin >> opcao;
  }

  std::cout << "Boa, escolheu a opção 4."
            << std::endl;

  return 0;
}
