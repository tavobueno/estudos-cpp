/*
Crie um programa que:

    Pergunte se o usuário terminou a lição de casa (sim ou não).

    Pergunte se ele já estudou C++ hoje (sim ou não).

    Se não fez a lição E não estudou C++, diga:
    "Você precisa se organizar melhor!"

    Se fez pelo menos uma das duas coisas, diga:
    "Bom começo, mas sempre podemos melhorar!"

    Se fez as duas coisas, diga:
    "Parabéns! Você está no caminho certo!"

*/
#include <iostream>

int main(){
  std::string fezAtividades;
  std::string estudouHoje;

  std::cout << "Estudou hoje? (sim / não): ";
  std::cin >> estudouHoje;

  std::cout << "Fez suas atividades de casa? (sim / não): ";
  std::cin >> fezAtividades;

  if(fezAtividades == "sim" && estudouHoje == "sim"){
    std::cout << "Parabéns! Você está no caminho certo!";
  }else if(fezAtividades == "sim" || estudouHoje == "sim"){
    std::cout << "Bom começo, mas sempre podemos melhorar!";
  }else{
    std::cout << "Você precisa se organizar melhor!";
  }

  std::cout << std::endl;

  return 0;
}
