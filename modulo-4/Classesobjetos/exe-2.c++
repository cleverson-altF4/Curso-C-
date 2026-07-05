#include <iostream>
#include <string>


class carro{
    public:
        std::string marca;
        int ano;
        float preco;


    void cadastrar(std::string m, int year, float valor){
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
    carro carro1;
    carro carro2;

    carro1.cadastrar("Toyota", 1994, 20.451);
    carro1.exibir();
    carro2.cadastrar("Celta", 1990, 15.354);
    carro2.exibir();
    
 return 0;   
}