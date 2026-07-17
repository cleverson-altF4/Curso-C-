#include <iostream>
#include <string>
#include "produto.h"


Roupa::Roupa(std::string nome, std::string tamanho, int quantidade, double preco){
    this->nome = nome;
    this->tamanho = tamanho;
    this->quantidade = quantidade;
    this->preco = preco;

}

std::string Roupa::getnome(){
    return nome;

}
std::string Roupa::gettamanho(){
    return tamanho;
}

int Roupa::getquantidade(){
    return quantidade;
}

double Roupa::getpreco(){
    return preco;
}

void exibir(){
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Tamanho: " << tamanho << "\n";
    std::cout << "Quantidade: " << quantidade << "\n";
    std::cout << "Preço R$: " << preco << "\n";

}