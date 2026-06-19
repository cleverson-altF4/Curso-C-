#include <iostream>

int main(){
    int nota = 10;
    int* ponteiro = &nota;

    std::cout<<"Valor normal int: " << nota << "\n";
    std::cout<<"Valor com endereço &: " <<&nota << "\n";
    std::cout<<"Valor da nota usando ponteiro *ponteiro: " << *ponteiro << "\n";

    return 0;
}