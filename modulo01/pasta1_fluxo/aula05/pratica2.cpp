/*
Modifique o código para criar uma variável booleana chamada acessoPermitido que recebe true se a idade for maior ou igual a 18, e false caso contrário. Depois imprima:

Acesso permitido: 1

ou

Acesso permitido: 0
*/

#include <iostream>
int main(){
  int idade;
  bool acessoPermitido;

  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  acessoPermitido = (idade >= 18) ? true : false;

  std::cout << "Seu acesso em booleano é " << acessoPermitido << ".";

  std::cout << std:: endl;

  return 0;
}

