#include <iostream>


int main(){
    int idade = 25;

    int* p = &idade;

    std::cout << "int idade " << idade << "\n";
    std::cout << "Endereço &idade: " << &idade << "\n";
    std::cout << "Endereço de P: " << p << "\n";
    std::cout << "Endereço com *p: " << *p << "\n";

    return 0;
}