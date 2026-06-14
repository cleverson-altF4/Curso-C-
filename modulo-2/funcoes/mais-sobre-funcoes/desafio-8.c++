/*Desafio sobrecarga de funções*/

#include <iostream>
#include <string>
#include <iomanip>

int imprimir(int numero){
    return numero;
}

float imprimir(float numero){
    return numero;
}


int somar(int a, int b){
    return a + b;
}

float somar(float a, float b){
    return a + b;
}

int somar(int a, int b, int c){
    return a + b + c;
}

int maior(int A, int B){
    if (A >= B)
    {
        return A;
    } else if (B >= A)
    {
        return B;
    } 
    
}

float maior(float A, float B){
    if (A >= B)
    {
        return A;
    } else if (B >= A)
    {
        return B;
    }
    
}

float area(float lado){
    float area = lado * lado;
}



void apresentar(std::string nome){
    std::cout << nome << "\n";
}

void apresentar(std::string nome, int idade){
    std::cout << ""<< nome << " " << idade << "\n";
}

int main(){
    apresentar("Clevison", 31);
}