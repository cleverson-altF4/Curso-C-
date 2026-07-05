/*Encapsulamento*/


#include <iostream> 
#include <string>

class carro {
    private:
        std::string marca;
        int ano;
        float preco;

        

    public:
        carro(std::string m, int year, int valor){
            marca = m;
            ano = year;
            preco = valor;
        }


    void exibir(){
        std::cout << "Marca do carro: " << marca << "\n";
        std::cout << "Ano do carro: " << ano << "\n";
        std::cout << "Valor do carro R$: " << preco << "\n";
    }
};


/*
A solução — Getters e Setters
Para acessar dados privados de fora da classe, você cria métodos públicos:

Getter — retorna o valor de um membro privado
Setter — modifica o valor de um membro privado*/

int main(){
    


}