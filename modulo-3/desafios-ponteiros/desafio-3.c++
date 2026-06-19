#include <iostream>

int main(){
    int nota = 10;
    int* ptr = &nota;

    *ptr = 99;

    std::cout<<"Nota: " << nota << "\n";


    return 0;

}