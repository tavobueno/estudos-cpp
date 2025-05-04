#include <iostream>
#include <cstdlib>

int main(){
  int opcao = -1;
  int number = 0;
  int n = 0;

  while(opcao != 0){
    system("clear");
    std::cout << "\n"
              << "-=====        CONTADOR        =====-"
              << "\n\n"
              << "QUANTIDADE ATUAL DE NÚMEROS PARA CONTAR: " << number << "."
              << "\n"
              << "[1] - Começar a contar!"
              << "\n"
              << "[2] - Modificar o quanto de números é para contar."
              << "\n"
              << "[0] - Sair"
              << "\n"
              << "Escolha uma opção: ";
    std::cin >> opcao;

    if (opcao == 0){
      std::cout << "Saindo...";
      std::cout << std::endl;
      break;
    };

    if(opcao == 1){
      if(number <= 0){
        system("clear");
        std::cout << "[AVISO] - Não é possível contar até 0!"
                  << "\nSaindo...";
        std::cout << std::endl;
        break;
      }

      system("clear");

      while(n <= number){
        std::cout << n << "\n";
        n++;
      }

      std::string temp = "";
      std::cout << "[ DIGITE QUALQUER COISA E PRESSIONE ENTER PARA VOLTAR ]" << "\n";
      std::cin >> temp;

    }else if(opcao == 2){
      std::cout << "Digite o número: ";
      std::cin >> number;
    }

  }
}
