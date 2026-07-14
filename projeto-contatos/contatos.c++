#include "contatos.h"
#include <string>
#include <iostream>


class contato{
    private:
        std::string nome;
        int telefone;
        std::string email;
    public:
        //construtor
        contato(std::string Nome, int Telefone, std::string Email){
        
            this-> nome = nome;
            this-> telefone = telefone;
            this-> email = Email;
        }

        //getters
        std::string getnome(){
            return nome;
        }

        int gettelefone(){
            return telefone;
        }

        std::string getemail(){
            return email;
        }


        //setters
        void setnome(std::string Nome){
            nome = Nome;
        }

        void settelefone(std::string Telefone){
            telefone = telefone;
        }

        void setemail(std::string Email){
            email = email;
        }

        void exibir(){
            std::cout << "Nome: " << nome << "\n";
            std::cout << "Telefone: " << telefone << "\n";
            std::cout << "Email: " << " @" << nome << "gmail.com\n"; 
        }


};