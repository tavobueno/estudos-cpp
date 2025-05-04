#include <iostream>

int main(){
  int number[5]; // 5 será o tamanho da array. (nao pode passar, se nao o programa literal, crasha)

  std::cout << "Digite 5 números para serem armazenados na array:";
  std::cout << std::endl;

  for (size_t i = 0; i < 5; i++){
    std::cout << i + 1 <<"º -> ";
    std::cin >> number[i];
  }

  std::cout << "Os números digitados foram: ";
  for (size_t i = 0; i < 5; i++){
    if(i == 4){
      std::cout << number[i] << ".";
    }else{
    std::cout << number[i] << ", ";
    }
  }

  std::cout << std::endl;

  return 0;
}
