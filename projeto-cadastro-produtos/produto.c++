#include "produto.h"
#include <string>
#include <iostream>

produto::produto(std::string name, double valor, int total){
    nome = name;
    preco = valor;
    quantidade = total;
}

//return getters  ----------------------
std::string produto::getNome(){
    return nome;
}

double produto::getPreco(){
    return preco;
}

int produto::getQuantidade(){
    return quantidade;
}


//setters -----------------------
void produto::setNome(std::string name){
    nome = name;
}

void produto::setPreco(double valor){
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