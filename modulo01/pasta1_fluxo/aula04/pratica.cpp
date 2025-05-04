#include <iostream>

int main(){
  int firstNumber;
  int secondNumber;

  std::cout << "Digite um número: ";
  std::cin >> firstNumber;
  std::cout << "Digite outro número: ";
  std::cin >> secondNumber;

  bool menorIgual = (firstNumber <= secondNumber);
  bool maiorIgual = (firstNumber >= secondNumber);
  bool maior = (firstNumber > secondNumber);
  bool menor = (firstNumber < secondNumber);
  bool diferente = (firstNumber != secondNumber);
  bool igual = (firstNumber == secondNumber);

  std::cout << firstNumber << " <= " << secondNumber << " = " << menorIgual << "\n";
  std::cout << firstNumber << " >= " << secondNumber << " = " << maiorIgual << "\n";
  std::cout << firstNumber << " > " << secondNumber << " = " << maior << "\n";
  std::cout << firstNumber << " < " << secondNumber << " = " << menor << "\n";
  std::cout << firstNumber << " == " << secondNumber << " = " << igual << "\n";
  std::cout << firstNumber << " != " << secondNumber << " = " << diferente << "\n";

  return 0;
}
