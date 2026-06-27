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
            maior =  *(notas + i);
        }
        
    }
    return maior;

}

float menorNota(float *notas, int tamanho){
    float menor = (*notas);

   for (int  i = 1; i < tamanho; i++)
   {
        if (*(notas + i) < menor)
        {
            menor = *(notas + i);
        }
        
   }
   return menor;
    
}

int contarAprovados(float *notas, int *frequencia, int tamanho){
    int contador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (*(notas + i) >= 6.0 && *(frequencia + i) >= 75)
        {
            contador++;
        }
        
    }
    return contador;
    
}

void exibirRelatorio(float *notas, int *frequencia, int tamanho, std::string Nometurma){
    float mediaNotas = media_notas(notas, tamanho);
    float frequenciaAlunos = media_frequencia(frequencia, tamanho);
    float MaiorNotaDoAluno = maiorNota(notas, tamanho);
    float MenorNotaDoAluno = menorNota(notas, tamanho);
    int totalAprovados = contarAprovados(notas, frequencia, tamanho);

    std::cout << "Turma: " << Nometurma << "\n";
    std::cout << "Média de notas: " << mediaNotas << "\n";
    std::cout << "Frequência de alunos: " << frequenciaAlunos << "\n";
    std::cout << "Maior nota: " << MaiorNotaDoAluno << "\n";
    std::cout << "Menor nota: " << MenorNotaDoAluno << "\n";
    std::cout << "Total de alunos aprovados: " << totalAprovados << "\n";
    std::cout << "----------------------------------------------------\n";
    
}