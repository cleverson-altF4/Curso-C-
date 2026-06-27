#ifndef TURMA_H
#define TURMA_H
#include <string>

float media_notas(float *notas, int tamanho);
float media_frequencia(int *frequencia, int tamanho);
int contarAprovados(float *notas, int *frequencia, int tamanho);
float maiorNota(float *notas, int tamanho);
float menorNota(float *notas, int tamanho);
void exibirRelatorio(float *notas, int *frequencia, int tamanho, std::string Nometurma);
#endif