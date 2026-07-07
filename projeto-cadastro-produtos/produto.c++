#include "produto.h"
#include <string>
#include <iostream>

produto::produto(std::string name, float valor, int total){
    nome = name;
    preco = valor;
    quantidade = total;
}


std::string produto::getNome(){
    return nome;
}

float produto::getPreco(){
    return preco;
}

int produto::getQuantidade(){
    return quantidade;
}


void produto::setNome(std::string name){
    nome = name;
}

void produto::setPreco(float valor){
    preco = valor;
}

void produto::setQuantidade(int total){
    quantidade = total;
}

void produto::exibir(){
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Preço R$: " << preco << "\n";
    std::cout << "Quantidade de produtos: " << quantidade << "\n";
}