#ifndef ALUNOS_H
#define ALUNOS_H
#include <string>

void cadastrarNotas(float* notas, int tamanhoArray); 
void cadastrarNomes(std::string* nomes, int tamanhoArray);
void exibirAlunos(const std::string* nomes, const float* notas, int tamanhoArray);//exibe as notas com const sem modificar 
int maiorNotas(const float* notas, int tamanhoArray);
int menorNotas(const float* notas, int tamanhoArray);
float mediaNotas(const float* notas, int tamanhoArray);


#endif