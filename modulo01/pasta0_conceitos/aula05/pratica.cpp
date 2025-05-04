#include <iostream>

int main(){
  int age;

  std::cout << "Digite sua idade: ";
  std::cin >> age;

  if(age < 18){
    std::cout << "Você é menor de idade.";
  }else if(age >= 65){
    std::cout << "Você é idoso.";
  }else{
    std::cout << "Você é maior de idade.";
  }

  return 0;
}
