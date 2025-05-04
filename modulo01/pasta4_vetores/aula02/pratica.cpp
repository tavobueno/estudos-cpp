#include <iostream>
#include <cstdlib>

int main(){
  int opcao = 1;

  system("clear");

  while(opcao != 0){
    int numerosASeremDigitados = 0;

    std::cout << "    EXERCÍCIO DE ARRAYS   "
              << "\n"
              << "         - MENU -         "
              << "\n"
              << "[?] Quantos números você quer digitar? "
              << "\n"
              << "-> ";
              std::cin >> numerosASeremDigitados;
              std::cout << std::endl;

    int somaTotal = 0;
    int numeros[numerosASeremDigitados];


    std::cout << " - Comece a digitar! - ";
    std::cout << std::endl;

    for (size_t i = 0; i < numerosASeremDigitados; i++){

      std::cout << i+1 << "º: ";
      std::cin >> numeros[i];

      somaTotal += numeros[i];
    }
    std::cout << "Números digitados: ";
    for (size_t i = 0; i < numerosASeremDigitados; i++){
      if(i == (numerosASeremDigitados - 1)){
        std::cout << numeros[i] << ".";
      }else{
      std::cout << numeros[i] << ", ";
      }
    }
    std::cout << std::endl;

    std::cout << "A soma total de todos esse número é igual a " << somaTotal << ".";

    opcao = 0;

  }

  std::cout << std::endl;
  return 0;
}
