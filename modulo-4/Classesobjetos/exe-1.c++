#include <iostream>
#include <string>


class carro{
    public:
        std::string marca;
        int ano;
        float preco;
};


int main(){
    carro carro1;
    carro carro2;

    carro1.marca = "Toyota";
    carro1.ano = 1994;
    carro1.preco = 20.450;

    std::cout << "Carro 1: Marca - " << carro1.marca << "\n";
    std::cout << "Carro 1: Ano de fabricação - " << carro1.ano << "\n";
    std::cout << "Carro 1: Valor do carro R$ " << carro1.preco << "\n";

    carro2.marca = "Celta";
    carro2.ano = 1990;
    carro2.preco = 12.000;
    std::cout << "-----------------\n";
    std::cout << "Carro 2: Marca - " << carro2.marca << "\n";
    std::cout << "Carro 2: Ano de fabricação - " << carro2.ano << "\n";
    std::cout << "Carro 2: Valor do carro R$ " << carro2.preco << "\n";



    return 0;

}