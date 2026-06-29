#include <iostream>
#include "copa.h"

int saldoGols(const int *golsFeitos, const int *golsofridos, int time)
{
    return *(golsFeitos + time) - *(golsofridos + time);
}

int maiorSaldo(const int *golsfeitos, const int *golsofridos, int tamanho)
{
    int indiceMaior = 0;
    int canditato = saldoGols(golsfeitos, golsofridos, 0);

    for (int i = 1; i < tamanho; i++)
    {
        int atual = saldoGols(golsfeitos, golsofridos, i);

        if (atual > canditato)
        {
            canditato = atual;
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

int primeiroLugar(const int *pontos, int tamanho){

     int indiceMaior = 0;
    int canditato = *(pontos + 0);

   
    
}