#include "conta.h"
#include <iostream>

void depositar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<< "Conta inválida\n"; 
    }else {
       
    }
    
}

void sacar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<<"Conta inválida\n";
    } else {

        saldoSuficiente(saldo, valor);
    }
    
    
}

bool saldoSuficiente(int*saldo, int valor){
    
    
    return *saldo >= valor;
    
}

