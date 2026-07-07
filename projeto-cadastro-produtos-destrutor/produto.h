#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class produto {
    //Classe do objeto produto privado
    private:
        std::string nome;  
        double preco;
        int quantidade;


    public:
        //metodo
        produto(std::string name, double valor, int total);
        ~produto(); // Adicionando o destrutor

    //função para exibir
    void exibir();

    //getters ------------------------------*
    std::string getNome();
    double getPreco();
    int getQuantidade();
    // -------------------------------------*


    //setters ------------------------------*
    void setNome(std::string name);
    void setPreco(double valor);
    void setQuantidade(int total);
    //  ------------------------------------*

};


#endif