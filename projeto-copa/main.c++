#include <iostream>
#include "copa.h"
#include <string>


int main(){
    int pontos[4];
    int golsFeitos[4];
    int golsSofridos[4];
    std::string nomes[4] = {"Brasil", "Argentina", "França", "Inglaterra"};

    for (int i = 0; i < 4; i++)
    {
        std::cout << nomes[i] << "\n";
        std::cout << " " << i << " - Digite quantos pontos: ";
        std::cin >> pontos[i]; 

        std::cout << "Quantos gols o time fez: ";
        std::cin >> golsFeitos[i];

        std::cout << "Quantos gols o time sofreu: ";
        std::cin >> golsSofridos[i];
    }

    int saldo  = saldoGols(golsFeitos, golsSofridos, 0);
    int maiorSaldodeGols = maiorSaldo(golsFeitos, golsSofridos, 4);
    int First = primeiroLugar(pontos, 4);
    std:: cout << "Saldo de gols: " << saldo <<"\n";
    std:: cout << "Maior saldo: " << nomes[maiorSaldodeGols]<<"\n";
    std:: cout << "Primeiro lugar: " << nomes[First] <<"\n";


    return 0;
}