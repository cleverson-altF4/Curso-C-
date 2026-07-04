#include <iostream>
#include  <string>
#include "alunos.h"

void cadastrarNotas(float* notas, int tamanhoArray){
   for (int i = 0; i < tamanhoArray; i++)
   {
        std::cout << "Digite a sua nota: ";
        std::cin >> notas[i]; //Mais legível
   }
   
}

void cadastrarNomes(std::string* nomes, int tamanhoArray){
    for (int i = 0; i < tamanhoArray; i++)
    {
        std::cout << "Cadastro do aluno: ";
        std::cin >> *(nomes + i); //Da forma que me ensinou essa shit
    }
    
}

void exibirAlunos(const std::string* nomes, const float* notas, int tamanhoArray){
    for (int i = 0; i < tamanhoArray; i++)
    {
        std::cout << "Nome: " << nomes[i] << " - Nota: " << notas[i] << "\n";
    }
    
}

int maiorNotas(const float* notas, int tamanhoArray){
    int maior = 0;
    float nota_doAluno1 = *(notas + 0);

    for (int i = 1; i < tamanhoArray; i++)
    {
        float nota_doAluno2 = *(notas + i);
        
        if (nota_doAluno2 > nota_doAluno1)
        {
            nota_doAluno1 = nota_doAluno2;

            maior = i;
        }   
        
        
    }
    return maior;
}

int menorNotas(const float* notas, int tamanhoArray){
    int menor = 0;
    float nota_doAluno1 = *(notas + 0);

    for (int i = 1; i < tamanhoArray; i++)
    {
        float nota_doAluno2 = *(notas + i);
        
        if (nota_doAluno2 < nota_doAluno1)
        {
            nota_doAluno1 = nota_doAluno2;

            menor = i;
        }   
        
        
    }
    return menor;
}

float mediaNotas(const float* notas, int tamanhoArray){
    float soma = 0;

    for (int i = 0; i < tamanhoArray; i++)
    {
        soma += *(notas + i);
    }
    return soma / tamanhoArray;
}