#include <iostream>
#include <string>
#include <cstdlib>

int main(){
  system("clear");

  bool menu = 1;
  int quantidadeAlunos;

  while(menu){
    system("clear");

    int opcao;

    std::cout << "\n   MENU-PROFESSORES   \n"
              << "\n"
              << "Escolha uma das opções:"
              << "\n"
              << "[1] - Colocar falta, nota, nome e idade a um número específico de alunos."
              << "\n"
              << "[0] - Sair (fechar)"
              << "\n"
              << "Digite: ";
    std::cin >> opcao;
    std::cout << std::endl;

    if(opcao == 0){
      std::cout << "[AVISO] - Saindo...\n";
      std::cout << std::endl;
      break;
    }

    if(opcao == 1){
      std::cout << "Quantos alunos serão? ";
      std::cin >> quantidadeAlunos;

      std::string alunos[quantidadeAlunos];
      int idades[quantidadeAlunos];
      float notas[quantidadeAlunos];
      bool presente[quantidadeAlunos];

      system("clear");

      std::cout << "\n[SISTEMA DE CADASTRO DE ALUNOS COM SUAS NOTAS E PRESENÇAS]\n\n"
                << "-> Quantidades de alunos para adicionar: "
                << quantidadeAlunos
                << "."
                << "\n"
                << "Deseja continuar?\n[1]: Sim\n[2]: Modificar a quantidade."
                << "\n"
                << "Digite: ";
                std::cin >> opcao;

      std::cout << std::endl;

      if(opcao != 2){
        for (size_t i = 0; i < quantidadeAlunos; i++){
          std::cout << "\n\n";

          std::cout << i + 1<<"º:\n---------------------\n";

          std::string nomeAluno;
          int idadeAluno;
          float notaAluno;
          bool presenteAluno;

          std::cout << "Nome: ";
          std::cin >> nomeAluno;
          std::cout << "Idade: ";
          std::cin >> idadeAluno;
          std::cout << "Nota: ";
          std::cin >> notaAluno;
          std::cout << "Presente [digite 1 ou 0 (1 = sim, 0 = não)]: ";
          std::cin >> presenteAluno;
          std::cout << "\n";

          alunos[i] = nomeAluno;
          idades[i] = idadeAluno;
          notas[i] = notaAluno;
          presente[i] = presenteAluno;
        }

        system("clear");

        for (size_t i = 0; i < quantidadeAlunos; i++){
          bool aprovado = (notas[i] >= 7) ? true : false;

          std::cout << "\n--------------------\n";
          std::cout << "Nome: " << alunos[i] << "."
                    << "\n"
                    << "Idade: " << idades[i] << "."
                    << "\n"
                    << "Nota: " << notas[i]
                    << "\n"
                    << "Aprovado: " << ((aprovado == true) ? "SIM":"NÃO") << "."
                    << "\n"
                    << "Presente: " << ((presente[i]) ? "SIM" : "NÃO") << ".";
        }
        std::cout << "\n\n[SUCESS] TODOS OS ALUNOS ACIMA FORAM ARMAZENADOS!"
                  << "Programa finalizado! Deseja  fechar o programa ou voltar ao menu? [1 para voltar ao menu e 0 para fechar]: ";
                  std::cin >> opcao;

        if(opcao == 1){
          menu = true;
        }else{
          menu = false;
        }
      }
    }
  }
}
