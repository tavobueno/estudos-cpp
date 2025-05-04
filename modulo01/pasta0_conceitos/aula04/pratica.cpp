#include <iostream>

int main(){
  int x;
  int y;

  std::cout << "Calculadora na prática :)";
  std::cout << std::endl;

  std::cout << "Digite o primeiro número: ";
  std::cin >> x;
  std::cout << "Digite o segundo número: ";
  std::cin >> y;

  std::cout << x << " + " << y << " = " << x + y << std::endl;
  std::cout << x << " - " << y << " = " << x - y << std::endl;
  std::cout << x << " x " << y << " = " << x * y << std::endl;
  std::cout << x << " / " << y << " = " << x / y << std::endl;
  std::cout << std::endl;

  x += 10;

  std::cout << "O valor do primeiro número (x) após a expressão 'x += 10' se tornou o número " << x << ".";
  std::cout << std::endl;
}
