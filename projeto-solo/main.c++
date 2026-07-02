#include <iostream>
#include "copa.h"
#include <string>


int main(){
    int pontos[4];
    int golsFeitos[4];
    int golsSofridos[4];
    std::string selecoes[4] = {"Brasil", "Alemanha", "Argentina", "Mata verde"};

    for (int i = 0; i < 4; i++)
    {
        std::cout << "\n ---  Jogos da copa  ---- \n";
        std::cout << selecoes[i] << "\n";
        std::cout << "Quantos pontos o time " << i << " fez: ";
        std::cin >> pontos[i];

        std::cout << "Quantos gols fizeram: ";
        std::cin >> golsFeitos[i];

        std::cout << "Quantos gols sofreram: ";
        std::cin >> golsSofridos[i];

        
    }

    for(int i = 0; i < 4; i++){
        int saldo = saldoGols(golsFeitos, golsSofridos, i);
        std::cout << selecoes[i] << " - Saldo: " << saldo << "\n";
    }
    
    
    int MaiorSaldoDeGols = TimeMaiorsaldo(golsFeitos, golsSofridos, 4);
    int first = (primeiroLugar(pontos, 4)); 
    std::cout << "Maior saldo de gols: " << selecoes[MaiorSaldoDeGols] << "\n";
    std::cout << "Primeiro lugar: " << selecoes[first] << "\n";
    

    
}