#include <iostream>
int main(){
  int idade;
  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  std::string mensagem = (idade >= 18) ? "maior":"menor";

  std::cout << "Você é " << mensagem << " de idade!";
  std::cout << std::endl;

  return 0;

}
