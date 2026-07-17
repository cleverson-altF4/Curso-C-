#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Roupa {
    private:
        std::string nome;
        std::string tamanho;
        double preco;
        int quantidade;

    Roupa(std::string nome, std::string tamanho, int quantidade, double preco);
    std::string getnome();
    std::string gettamanho();
    int getquantidade();
    double getpreco();


    void exibir();
       

};


#endif