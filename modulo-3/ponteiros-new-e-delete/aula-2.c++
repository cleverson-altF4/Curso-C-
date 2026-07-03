#include <iostream>

int* criarValor(int valor){
    int* ptr = new int(valor);
    return ptr;
}

int main(){
    int* number = criarValor(42);
    std::cout << "Numero: " << *number << "\n";
    delete number;
    number = nullptr;

    return 0;
}