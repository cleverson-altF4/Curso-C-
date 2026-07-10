/*Construtores*/

#include <iostream>
#include <string>


class carro{
    public:
        std::string marca;
        int ano;
        float preco;


        carro(std::string m, int year, float valor){ //Chama a classe em vez de uma função 
        //construtor
        marca = m;
        ano = year;
        preco = valor;
        
    }

    void exibir(){
        std::cout << "Marca do carro: " << marca << "\n";
        std::cout << "Ano do carro: " << ano << "\n";
        std::cout << "Valor do carro R$: " << preco <<"\n";
        std::cout << "---------------------------\n";
    }
};


int main(){
    carro carro1("Toyota", 1994, 20.514);  //Chama a classe carro e o construtor 
    carro carro2("Celta", 1990, 15.451);
    carro1.exibir();
    carro2.exibir();

    
 return 0;   
}