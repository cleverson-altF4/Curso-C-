#include <iostream>

int main(){
    int numero = 10;

    int* p = &numero;

    *p = 99;

    std::cout << numero << "\n";

    return 0;
}