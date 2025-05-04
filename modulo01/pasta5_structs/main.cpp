#include <iostream>
#include <cstdlib>

struct Aluno {
  int idade;
  std::string nome;
  float nota;
  std::string sala;
  bool presente;
};

struct Turmas {
  std::string nome;
  Aluno alunos[30];
  int quantidadeAlunos = 0;
};

void mostrarLinhaSeparadora() {
  std::cout << "---------------------------------------------\n";
}

int main() {
  system("clear");

  int quantidadeAlunos;
  Turmas turma[3];

  turma[0].nome = "9a";
  turma[1].nome = "9b";
  turma[2].nome = "9c";

  std::cout << "================ CADASTRO DE ALUNOS ================\n";
  std::cout << "Quantos alunos você deseja cadastrar? ";
  std::cin >> quantidadeAlunos;

  for (int i = 0; i < quantidadeAlunos; i++) {
    system("clear");

    std::string stringTemp;
    int salaNumero;

    std::cout << "\n========== CADASTRO DO ALUNO #" << i + 1 << " ==========\n";

    std::cout << "Informe a sala do aluno (9a, 9b, 9c): ";
    std::cin >> stringTemp;

    if (stringTemp == "9a") salaNumero = 0;
    else if (stringTemp == "9b") salaNumero = 1;
    else if (stringTemp == "9c") salaNumero = 2;
    else {
      std::cout << "Sala inválida! Usando padrão: 9a.\n";
      salaNumero = 0;
    }

    int idx = turma[salaNumero].quantidadeAlunos;

    std::cout << "Nome do aluno: ";
    std::cin >> turma[salaNumero].alunos[idx].nome;
    std::cout << "Idade do aluno: ";
    std::cin >> turma[salaNumero].alunos[idx].idade;
    std::cout << "Nota do aluno: ";
    std::cin >> turma[salaNumero].alunos[idx].nota;
    turma[salaNumero].alunos[idx].sala = turma[salaNumero].nome;

    std::cout << "O aluno está presente? [s/n]: ";
    std::cin >> stringTemp;
    turma[salaNumero].alunos[idx].presente = (stringTemp == "s" || stringTemp == "S" || stringTemp == "sim" || stringTemp == "Sim");

    turma[salaNumero].quantidadeAlunos++;
  }

  system("clear");
  std::cout << "\n========== RELATÓRIO FINAL DE TURMAS ==========\n\n";

  for (int i = 0; i < 3; i++) {
    std::cout << "=========== SALA " << turma[i].nome << " ===========\n";
    std::cout << "Alunos cadastrados: " << turma[i].quantidadeAlunos << "\n";
    if (turma[i].quantidadeAlunos == 0) {
      std::cout << "Nenhum aluno cadastrado.\n\n";
      continue;
    }

    std::cout << "\nAlunos:\n";
    for (int j = 0; j < turma[i].quantidadeAlunos; j++) {
      mostrarLinhaSeparadora();
      std::cout << "Nome: " << turma[i].alunos[j].nome << "\n";
      std::cout << "Idade: " << turma[i].alunos[j].idade << "\n";
      std::cout << "Nota: " << turma[i].alunos[j].nota << "\n";
      std::cout << "Presente: " << (turma[i].alunos[j].presente ? "Sim" : "Não") << "\n";
      mostrarLinhaSeparadora();
    }
    std::cout << "===============================\n\n";
  }

  return 0;
}
