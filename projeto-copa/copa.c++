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

    int indiceMaior = 0; // Ele guarda uma variavel com valor 0
    int ponto = *(pontos + 0); //Aqui ele cria uma variavel com o ponteiro na posição 0 para comparar os valores na posição 0

    for (int i = 1; i < tamanho; i++) // esse for ele começa na posiçao 1 para comparar com o ponto que começa na posicao
    {
        int Atual = *(pontos + i); // Aqui pega a posição atual do ponto com a posição i que começa em 1

        if (Atual > ponto) // se o ponto atual é maior que o candidato (exemplo 6 é maior que 4) = true e fica na primeira posição depois faz o loop para comparar novamente
        {
            ponto = Atual; //ponto ele recebe o valor do atual 
            indiceMaior = i; // indiceMaior fica com a posição final do maior número
        }
        
    }
    return indiceMaior; // aqui ele retorna o valor final 

}