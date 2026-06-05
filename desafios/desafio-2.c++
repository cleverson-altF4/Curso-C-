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
        if (altitude <= 10)
        {
            std::cout << "Motor desligado -- queda livre" << std::endl;

            altitude = 0;
            break;
        } else {
            altitude -=  15;
            std::cout << "Descendo" << " altitude " << altitude << std::endl;
        }
          
        
    } while (altitude > 0);

    std::cout << "O drone pousou na altitude " << altitude << std::endl;



    std::cout << "\n------  Pouso com for + do while juntos ------\n";

    int pistas[5] = {0,1,0,0,1};

    for (int j = 0; j < 5; j++)
    {
        if (pistas[j] == 0)
        {
            std::cout << "Pista " << j << " está com problemas" << std::endl;
            continue;
        }

        int tentativas = 1;

        do
        {  
            std::cout << "Pista " << j << " tentativas " << tentativas << std::endl;
            tentativas++;
        } while (tentativas <= 3);
        
        std::cout << "Alinhado -- pousando na pista " << j << std::endl;
        break;
    }
    
    

    return 0;
}