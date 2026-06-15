/*Lambdas com retorno*/

#include <iostream>

int main(){
    auto multiplicar = [](int a, int b){
        return a * b;
    };

    int resultado = multiplicar(2,4);
    std::cout << "Resultado da multiplicação " << resultado << "\n";

    return 0;
}