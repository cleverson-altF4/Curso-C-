#include <iostream>
#include "copa.h"



int main(){
    int pontos[4];
    int golsFeitos[4];
    int golsSofridos[4];

    for (int i = 0; i < 4; i++)
    {
        std::cout << " " << i << " - Digite os pontos da seleção: ";
        std::cin >> pontos[i]; 

        std::cout << "Quantos gols o time fez: ";
        std::cin >> golsFeitos[i];

        std::cout << "Quantos gols o time sofreu: ";
        std::cin >> golsSofridos[i];
    }

    


    return 0;
}