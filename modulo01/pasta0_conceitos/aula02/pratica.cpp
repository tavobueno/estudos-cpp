#include <iostream>
#define pi 3.1415
int main(){

  // Declaração das variáveis para armazenar o nome e a idade
  std::string nome;
  int idade;

  // Solicitando que o usuário digite seu nome
  std::cout << "Digite seu nome: ";
  std::cin >> nome;  // Armazenando o nome digitado pelo usuário na variável 'nome'

  // Solicitando que o usuário digite sua idade
  std::cout << "Digite sua idade: ";
  std::cin >> idade;  // Armazenando a idade digitada pelo usuário na variável 'idade'

  std::cout << std::endl;  // Imprimindo uma linha em branco para melhor formatação

  // Exibindo uma mensagem personalizada usando o nome e a idade do usuário
  std::cout << "Seja bem-vindo(a) "
            << nome
            << "! "
            << "Você tem "
            << idade
            << " anos."
            << std::endl;

}
