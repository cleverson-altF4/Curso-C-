/*Funções com declaração e definição separadas

Declaração — avisa o compilador que a função existe. Fica antes do main

int somar(int a, int b); // só o cabeçalho, com ;

------------------------------------------------------------

Definição — o corpo completo da função. Fica depois do main:

int somar(int a, int b){
    return a + b;
}

*/



#include <iostream>

void saudacao();
int quadrado(int numero);
bool ehPositivo(int num);
float dividir(float a, float b);
void tabuada(int numeroTabuada);


int main(){
   saudacao();
   int resposta_quadrado = quadrado(2);
   std::cout<<"Quadrado: " << resposta_quadrado  << "\n";

   bool resposta_ehPositivo = ehPositivo(1);
   std::cout<<"Positivo ou negativo: " << resposta_ehPositivo  << "\n";

   float resposta_divisao = dividir(4, 2);
   std::cout<<"Divisao: " << resposta_divisao << "\n";

   tabuada(10);
}

void saudacao(){
    std::cout<< "Olá" << "\n";
    
}

int quadrado(int numero){
    int res = numero * numero;
    return res;
}

bool ehPositivo(int num){
    return num > 0;
}

float dividir(float a, float b){
    return a / b;
}

void tabuada(int numeroTabuada){
    for (int i = 1; i <= numeroTabuada; i++)
    {
        int res = numeroTabuada * i;

        std::cout<<"" << numeroTabuada << "x" << i << " = " << res << "\n";
    }
    
}