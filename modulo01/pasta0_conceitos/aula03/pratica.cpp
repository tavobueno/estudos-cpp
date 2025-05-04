#include <iostream>

int main(){
  int idade;
  std::string nome;
  int matriculaUser;


  int matriculaPassada = 123123;
  char classeNota = 'A';


  double pi = 3.1415;

  float temperatura = 28.5f;

  bool estudando = 1;

  if(estudando == true){

    std::cout << "Qual o seu nome? Digite: ";
    std::cin >> nome;

    std::cout << "Qual o sua idade? Digite: ";
    std::cin >> idade;

    std::cout << std::endl;


    std::cout << "Seja bem vindo(a) "
              << nome
              << ". Digite sua matrícula: ";
    std::cin >> matriculaUser;

    if(matriculaUser == matriculaPassada){
      std::cout << "Parabéns "
                << nome
                << ", sua nota é de classe "
                << classeNota
                << "!"
                << std::endl;
    }else{
      std::cout << "Você não passou no teste. Se esforce mais."
                << std::endl;
    }

  }
}
