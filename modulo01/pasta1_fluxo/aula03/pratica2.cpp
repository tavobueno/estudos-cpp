/*
Crie um programa que:

    Conte de 1 até 100.

    Mas:

        - Se o número for múltiplo de 3, exiba "Fizz".
        - Se for múltiplo de 5, exiba "Buzz".
        - Se for múltiplo de 3 e 5, exiba "FizzBuzz".
        - Caso contrário, apenas imprima o número.
*/
#include <iostream>
int main(){
  int quantidadeFizz = 0;
  int quantidadeBuzz = 0;
  int quantidadeFizzBuzz = 0;

  for (int number = 1; number <= 100; number++){
    if(number % 3 == 0 && number % 5 == 0){
      std::cout << "FizzBuzz" << std::endl;
      quantidadeFizzBuzz += 1;
    }else if(number % 3 == 0){
      std::cout << "Fizz" << std::endl;
      quantidadeFizz += 1;
    }else if(number % 5 == 0){
      std::cout << "Buzz" << std::endl;
      quantidadeBuzz += 1;
    }else{
      std::cout << number << std::endl;
    }
  }

  std::cout << "\n\nESTASTÍSTICAS:"
            << "\nFizz: " << quantidadeFizz
            << "\nBuzz: " << quantidadeBuzz
            << "\nFizzBuzz: " << quantidadeFizzBuzz
            << std::endl;

  return 0;
}
