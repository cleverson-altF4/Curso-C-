#include <iostream>
#include <string>
#include "produto.h"


Roupa::Roupa(std::string nome, std::string tamanho, int quantidade, double preco){
    this->nome = nome;
    this->tamanho = tamanho;
    this->quantidade = quantidade;
    this->preco = preco;

}

std::string Roupa::getnome() const{
    return nome;

}
std::string Roupa::gettamanho() const{
    return tamanho;
}

int Roupa::getquantidade() const{
    return quantidade;
}

double Roupa::getpreco() const{
    return preco;
}

void Roupa::exibir(){
    std::cout << "---------------------------------------\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Tamanho: " << tamanho << "\n";
    std::cout << "Quantidade: " << quantidade << "\n";
    std::cout << "Preço R$: " << preco << "\n";
    std::cout << "\n-----------------------------------\n";

}