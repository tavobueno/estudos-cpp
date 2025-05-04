#include <iostream>

int main(){
  /* DEFINIÇÕES DAS VARIÁVEIS */
  int opcao = -1;
  double firstNumber;
  double secondNumber;
  double resultado;

  while(opcao != 0){
    /* MENU */
      std::cout << "\nCALCULADORA\n\n"
      << "[1] Somar dois números\n"
      << "[2] Subtrair dois números\n"
      << "[3] Multiplicar dois números\n"
      << "[4] Dividir dois números\n"
      << "[0] Sair\n"
      << "Escolha uma opção: ";
    std::cin >> opcao;
    std::cout << std::endl;

    /* Verificações */
    if(opcao == 0){
    std::cout << "Saindo...";
    std::cout << std::endl;
    return 0;
    }
    if(opcao > 4 || opcao < 0){
    std::cout << "Opcão inválida!";
    return 0;
    }

    /* Atribuindo valores aos números */
    std::cout << "Digite o primeiro número: ";
    std::cin >> firstNumber;
    std::cout << "Digite o segundo número: ";
    std::cin >> secondNumber;
    std::cout << std::endl;

    /* Fazendo o calculo */
    switch (opcao)
    {
    case 1:
    resultado = firstNumber + secondNumber;
    break;
    case 2:
    resultado = firstNumber - secondNumber;
    break;
    case 3:
    resultado = firstNumber * secondNumber;
    break;
    case 4:
    if(secondNumber == 0){
    std::cout << "Não é possível dividir "
          << firstNumber
          << " por "
          << secondNumber
          << "!";
    std::cout << std::endl;
    return 0;
    }
    resultado = firstNumber / secondNumber;
    break;
    }

    std::cout << "Resultado da expressão: "
      << resultado
      << ".";


    std::cout << std::endl;
  }




  return 0;
}
