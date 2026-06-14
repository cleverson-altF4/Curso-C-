/*Desafio sobrecarga de funções*/

#include <iostream>
#include <string>


void imprimir(int numero){
    std::cout << "Numero inteiro: " << numero << "\n";
    
}

void imprimir(float numero){
    std::cout << "Numero float: " << numero << "\n";
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
    } else { 
        return B;
    }
}

float maior(float A, float B){
    if (A >= B)
    {
        return A;
    } else { 
    
        return B;
    } 
    
    
}

float area(float lado){
    float A = lado * lado;
    return A;
}

float area(float largura, float altura){
    float A = largura * altura;
    return A;
}



void apresentar(std::string nome){
    std::cout << nome << "\n";
}

void apresentar(std::string nome, int idade){
    std::cout << ""<< nome << " " << idade << "\n";
}


int main(){
    imprimir(5);

    imprimir(2.5f);

    
    int res_somar = somar(2,2);
    std::cout << "Somar inteiro: " << res_somar << "\n";

    float res_soma= somar(2.0f,5.1f);
    std::cout << "Somar decimal: " << res_soma << "\n";

    int res_maior = maior(5,4);
    std::cout << "Maior número inteiro: " << res_maior << "\n";
    
    float res_maio = maior(6,4);
    std::cout << "Maior número decimal: " << res_maio << "\n";


    int res_area = area(25);
    std::cout << "Lado da area: " << res_area << "\n";

    float res_areaa = area(25, 14);
    std::cout << "Largura x altura: " << res_areaa << "\n";

    apresentar("Clevison");
    apresentar("Clevison", 31);
}