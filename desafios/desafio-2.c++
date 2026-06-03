#include <iostream>


int main(){
    std::cout << "\n--------- Uso do for ---------\n";
    int pista[10] = {0,0,1,0,0,1,0,1,0,0};
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        
        if (pista[i] == 1)
        {
            std::cout << "Pista " << i << " obstáculo" << std::endl;
            contador++;

        } else {
            std::cout << "Pista " << i << " livre" << std::endl;
        }
        
        
    }
    
    std::cout << "Foram encontrados " << contador << " obstáculos" << std::endl;

    if (contador > 2)
    {
        std::cout << "Pista perigosa - Abortar pouso" << std::endl;
    } else {
        std::cout << "Pista liberada" << std::endl;
    }


    std::cout << "\n--------- Uso do While ---------\n";


    

    return 0;
}