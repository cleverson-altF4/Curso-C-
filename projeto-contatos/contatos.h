#ifndef CONTATOS_H
#define CONTATOS_H
#include <string>

class contato{
    private:
        std::string nome;
        int telefone;
        std::string email;
    public:
        contato(std::string Nome, int Telefone, std::string Email){
        
            this-> nome = nome;
            this-> telefone = telefone;
            this-> email = Email;
        }

        //getters
        std::string getnome();
        int gettelefone();
        std::string getemail();


        //setters
        void  setnome(std::string Nome);
        void  settelefone(int Telefone);
        void  setemail(std::string Email);


        void exibir();


        ~contato();
};





#endif

