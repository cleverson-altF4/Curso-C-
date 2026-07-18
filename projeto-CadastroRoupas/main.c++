#include <iostream>
#include <vector>
#include "produto.h"

int main(){
    std::vector<Roupa> estoque;
    int opcao;

    do
    {
        std::cout << "\n ----- Loja -------\n";
        std::cout << "1 - Cadastrar roupa\n";
        std::cout << "2 - Lista de roupas\n";
        std::cout << "0 - Sair\n";
        std::cout << "Deseja qual opção: ";
        std::cin >> opcao;

      switch (opcao)
{
        case 1:
        {
            std::cout << "\nCadastrar\n";
            std::string nome, tamanho;
            int quantidade;
            double preco;

            std::cout << "Nome: ";
            std::cin >> nome;

            std::cout << "Tamanho: (PP, P, M, G, GG): ";
            std::cin >> tamanho;

            std::cout << "Quantidade: ";
            std::cin >> quantidade;

            std::cout << "Preco R$: ";
            std::cin >> preco;

            Roupa cadastrarRoupa(nome, tamanho, quantidade, preco);
            estoque.push_back(cadastrarRoupa);

            std::cout << "Cadastrada com sucesso!\n";
            break;
        }
        case 2:
            std::cout << "\nLista de roupas\n";
            for (int i = 0; i < estoque.size(); i++)
            {
                estoque[i].exibir();
            }
            break;

        case 0:
            std::cout << "\nSaindo do programa\n";
            break;

        default:
            std::cout << "Opcao invalida\n";
            break;
    }
        
    } while (opcao != 0);
    
    return 0;
}