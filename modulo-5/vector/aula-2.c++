#include <iostream>
#include <vector>





int main(){
    std::vector<int>numeros;
    int numero;
    for (int i = 0; i < 5; i++)
    {
        int numero;
        std::cout << "Digite: ";
        std::cin >> numero;

        numeros.push_back(numero);
    }

    std::cout << "Números digitados\n";

    for (int i = 0; i < numeros.size(); i++)
    {
        std::cout << i+1 << ": " << numeros[i]<< "\n";
    }
    
    

    return 0;
}