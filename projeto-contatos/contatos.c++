#include "contatos.h"
#include <string>
#include <iostream>

//Chamando a classe via ::
contato::contato(std::string Nome, long long Telefone, std::string Email){

    this-> nome = Nome;
    this->telefone = Telefone;
    this->email = Email;

}

//pegando a classe via :: e usando em getter()
std::string contato::getnome(){
    return nome;

}

long long contato::gettelefone(){
    return telefone;
}

std::string contato::getemail(){
    return email;
}
//setters chamando com void
 void contato::setnome(std::string Nome){
    nome = Nome;
}

void contato::settelefone(long long Telefone){
    telefone = Telefone;
}

void contato::setemail(std::string Email){
    email = Email;
}

//Chama a classe contato junto com a função void exibir()
void contato::exibir(){
    std::cout  << "Nome: " << nome << "\n";
    std::cout << "Telefone:: " << telefone << "\n";
    std::cout << "Email: " <<  email << "\n";
}