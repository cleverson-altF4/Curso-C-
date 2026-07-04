#include <iostream>
#include "alunos.h"
#include <string>

int main(){
    float* notas = new float[5];
    std::string* nomes = new std::string[5];

    cadastrarNomes(nomes, 5);
    cadastrarNotas(notas, 5);
    maiorNotas(notas, 5);
    menorNotas(notas, 5);
    mediaNotas(notas, 5);

    int idMaior = maiorNotas(notas, 5);
    int idMenor = menorNotas(notas, 5);
    float media = mediaNotas(notas, 5);

    std::cout << "\n ---- Cadastro de alunos ------\n";
    exibirAlunos(nomes, notas, 5);
    std::cout << "Maior nota: " << nomes[idMaior] << " - " << notas[idMaior] << "\n";
    std::cout << "Menor nota: " << nomes[idMenor] << " - " << notas[idMenor] << "\n";
    std::cout << "Média: " << media << "\n";
   

    delete [] nomes;
    nomes = nullptr;

    delete [] notas;
    notas = nullptr;

    return 0;
}