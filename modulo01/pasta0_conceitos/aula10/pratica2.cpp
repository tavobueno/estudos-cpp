/*
Crie um programa que:

    Peça ao usuário a temperatura atual (em graus Celsius).

    Use o operador ternário para exibir uma mensagem sobre a roupa ideal para o clima:

    Se a temperatura for menor que 20°C, diga:
    "Está frio! Vista um casaco."

    Caso contrário, diga:
    "Temperatura agradável. Roupas leves estão boas!"
*/

#include <iostream>

int main(){
  float temperatura;

  std::cout << "Digite a temperatura atual em Celsius: ";
  std::cin >> temperatura;

  std::string mensagem = (temperatura < 20) ? "Está frio! Vista um casaco." : "Temperatura agradável. Roupas leves estão boas!";

  std::cout << mensagem << std::endl;
}
