/*Encapsulamento*/


#include <iostream> 
#include <string>

class carro {
    private:
        std::string marca;
        int ano;
        float preco;

        

    public:
        carro(std::string m, int year, float valor){
            marca = m;
            ano = year;
            preco = valor;
        }

        //Getters     <--------------------------------------------------------
        std::string getMarca(){
            return marca;
        }

        int getAno(){
            return ano;
        }

        float getPreco(){
            return preco;
        }


        //Setters     <----------------------------------------------------------
        void setMarca(std::string m){
            marca = m;
        }

        void setAno(int year){
            ano = year;
        }

        void setPreco(float valor){
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
    carro carro1("Toyota", 1990, 20.451);
    carro1.exibir();

    //Usar o getter 

    std::cout << "Marca atual: " << carro1.getMarca() << "\n";

    std::cout << "\n------------------------\n";
    //Usando o getter para mudar o objeto
    carro1.setMarca("Celta");
    carro1.setAno(2000);
    carro1.setPreco(15.001);

    std::cout << "Carro atualizado: \n";
    carro1.exibir();
    
    return 0;

}