/*Lambdas com capture list*/

#include <iostream>

int main(){
    int desconto = 10;

    auto aplicar_desconto = [desconto](int preco){
        return preco - desconto;

    };

    int resultado = aplicar_desconto(100);
    std::cout << "Desconto: " << resultado << "\n";

    return 0;
}