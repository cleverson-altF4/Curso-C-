#ifndef CONTATOS_H
#define CONTATOS_H
#include <string>

class contato{
    private:
        std::string nome;
        long long telefone;
        std::string email;
    public:
        //Não precisa usar o This-> alocação
        contato(std::string Nome, long long Telefone, std::string Email);

        //getters
        std::string getnome();
        long long gettelefone();
        std::string getemail();


        //setters
        void  setnome(std::string Nome);
        void  settelefone(long long Telefone);
        void  setemail(std::string Email);


        void exibir();

        //destrutor
        ~contato() = default;


};





#endif

