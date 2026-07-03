#include <iostream>

int main(){
    int* numero = new int[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Selecione (5 números): ";
        std::cin >> numero[i];
        
    }

    for (int j = 0; j < 5; j++)
        {
            std::cout << " " << numero[j];  

        }

    delete [] numero;
    numero = nullptr;


    return  0;
}