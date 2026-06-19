#include "conta.h"
#include <iostream>

void depositar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<< "Conta inválida\n"; 
    }else {
        valor += *saldo;
    }
    
}

void sacar(int* saldo, int valor){
    if (saldo == nullptr)
    {
        std::cout<<"Conta inválida\n";
    } else {

    }
    
}

void saldoSuficiente(int*saldo, int valor){
    if (*saldo >= valor)
    {
        return true;
    } else {
        return false;
    }
    
    
}

