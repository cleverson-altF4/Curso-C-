#include "turma.h"
#include <iostream>
#include <string>


float media_notas(float *notas, int tamanho){
    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(notas + i);

    }
    return soma / tamanho;
}

float media_frequencia(int *frequencia, int tamanho){
    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(frequencia + i);
    }
    return soma / tamanho;
}


float maiorNota(float *notas, int tamanho){
    float maior = *notas;

    for (int i = 1; i < tamanho; i++)
    {
        if (*(notas + i) > maior)
        {
            std::cout << "Maior: " << maior << "\n";
        }
        
    }
    return maior;

}
