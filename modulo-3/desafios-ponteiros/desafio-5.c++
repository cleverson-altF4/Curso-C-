/*Ponteiro nulo 

    No mundo real, ponteiros nem sempre apontam para algo válido. Um ponteiro nulo não aponta para nada:

    int* ptr = nullptr;

*/

#include <iostream>

void imprimir_valor(int* ptr){
    if (ptr == nullptr)
    {        
        std::cout << "Ponteiro inválido" << "\n"; 
    } else {
        std::cout<<""<< *ptr << "\n";
    }


}


int main(){
    int numero = 42;
    imprimir_valor(&numero);
    imprimir_valor(nullptr);

    return 0;

}

