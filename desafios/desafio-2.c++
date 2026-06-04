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


    std::cout << "\n--------- Uso Do While ---------\n";

    int altitude = 100;

    do
    {   
        if (altitude <= 10 && altitude == 0)
        {
            std::cout << "Motor desligado -- queda livre" << std::endl;
            break;
        } else {
            altitude -=  15;
            std::cout << "Descendo" << " altitude " << altitude << std::endl;
        }
          
        
    } while (altitude > 0);

    std::cout << "O drone pousou na altitude " << altitude << std::endl;
    

    return 0;
}