#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class produto {
    //Classe do objeto produto
    private:
        std::string nome;
        float preco;
        int quantidade;


    public:
        //metodo
        produto(std::string name, float valor, int total);

    //função para exibir
    void exibir();

    //getters ------------------------------*
    std::string getNome();
    float getPreco();
    int getQuantidade();
    // -------------------------------------*


    //setters ------------------------------*
    void setNome(std::string name);
    void setPreco(float valor);
    void setQuantidade(int total);
    //  ------------------------------------*

};


#endif