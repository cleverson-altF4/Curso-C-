/*Incrementando o próprio array*/

#include <iostream>

int main(){
    int array[4] = {0,1,2,3};
    int *ptr = array;

    std::cout << "Primeiro número aparece 0: " << *ptr << "\n";
    ptr++; //pula para o próximo número que é 1
    std::cout << "Primeiro número aparece 1: " << *ptr << "\n";
    ptr++; //pula para o próximo número que é 2
    std::cout << "Primeiro número aparece 2: " << *ptr << "\n";
    ptr++; //pula para o próximo número que é 3
    std::cout << "Primeiro número aparece 3: " << *ptr << "\n";

    return 0;
    
}