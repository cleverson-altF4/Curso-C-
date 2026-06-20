#include "conta.h"
#include <iostream>

void depositar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<< "Conta inválida\n"; 
    }else {
       *saldo += valor;
    }
    
}

void sacar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<<"Conta inválida\n";
    } else {

        if (saldoSuficiente(saldo, valor))
        {
            *saldo -= valor;
        } else {
            std::cout<<"Saldo insuficiente\n"; 
        }
        
    }
    
    
}

bool saldoSuficiente(int*saldo, int valor){
    
    
    return *saldo >= valor;
    
}

