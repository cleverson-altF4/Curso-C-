#include <iostream>

void triplicar(int* ptr){
    *ptr *= 3;     
}

int main(){
    int numero = 5;
    triplicar(&numero);

    std::cout<<"Número: " << numero << "\n";

    return 0;
}