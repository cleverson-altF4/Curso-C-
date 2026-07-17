#include <iostream>
#include <vector>


int main(){

    std::vector<int> numeros;

    numeros.push_back(10);
    numeros.push_back(13);
    numeros.push_back(5);
    //numeros.size();
    numeros.pop_back();
    numeros[0];
    

    //usando o for tradicional 
    for (int i = 0; i < numeros.size(); i++)
    {
        std::cout << i+1 << ": " << numeros[i] << "\n";
    }


    for(auto numero: numeros){
        std::cout << "Numero: " << numero << "\n"; 
    }
    
    return 0;
}