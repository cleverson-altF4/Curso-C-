#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Roupa {
    private:
        std::string nome;
        std::string tamanho;
        double preco;
        int quantidade;
    public:
        Roupa(std::string nome, std::string tamanho, int quantidade, double preco);
        std::string getnome() const;
        std::string gettamanho() const;
        int getquantidade() const;
        double getpreco() const;


    void exibir();
       

};


#endif