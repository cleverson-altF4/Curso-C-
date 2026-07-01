#include <iostream>
#include "copa.h"


int saldoGols(const int *golsMarcados, const int *golsSofridos, int time){
    return *(golsMarcados + time) - *(golsSofridos + time);
}

int TimeMaiorsaldo(const int *golsMarcados, const int *golsSofridos, int tamanho){

    int maior = 0;

    int primeiroTime = saldoGols(golsMarcados, golsSofridos, 0);

    for (int i = 1; i < tamanho; i++)
    {
        int segundoTime = saldoGols(golsMarcados, golsSofridos, i);

        if (segundoTime > primeiroTime)
        {
            primeiroTime = segundoTime;
            maior = i;
        }
        
    }
    return maior;

}

int primeiroLugar(const int *pontos, int tamanho){

    int maior = 0;
    int FirstTime = *(pontos + 0);

    for (int i = 1; i < tamanho; i++)
    {
        int secondTime = *(pontos + i);

        if (secondTime > FirstTime)
        {
            FirstTime = secondTime;
            maior = i;
        }
        
        
    }
    return maior;
}