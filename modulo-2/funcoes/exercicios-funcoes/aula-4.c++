//Funções que retorna BOOL

#include <iostream>

bool mostrarIdade(int idade){
    return idade >= 18;
}

int main(){

    std::cout << std::boolalpha; //mostra true em vez de 1
    std::cout << mostrarIdade(15);
}