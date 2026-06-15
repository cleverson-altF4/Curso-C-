#include <iostream>

int main(){
    int num = 10;
    

    std::cout << "Número: " << num << "\n";
    std::cout << "Número: " << &num << "\n";


    int numero = 10;
    int* ponteiro = &numero;

    std::cout <<"Ponteiro: " << ponteiro << "\n";
    std::cout <<"*ponteiro: " << *ponteiro << "\n";

    return 0;

}

//Dica sobre ponteiros pensando como se fosse uma gaveta

/*
    int numero = 10                --> variável que armazena o valor
    &numero                        --> endereço que está na gaveta
    int* p                         --> papel com o número da gaveta anotado
    *p                             --> Abrir a gaveta com o conteúdo 
*/