/*Lambdas capture por referência*/

#include <iostream>

int main(){
    int contador = 0;

    auto incrementar = [&contador](){
        contador++;
    };


    incrementar();
    incrementar();
    incrementar();
    incrementar();

    std::cout << "Contador "<< contador << "\n";
    return 0;

}