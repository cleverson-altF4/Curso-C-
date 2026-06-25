#include <iostream>
#include "conta.h"

void exibirSaldo(int*saldo);

int main(){
    int saldo = 1000;

    depositar(&saldo,1001);

    exibirSaldo(&saldo);

    sacar(&saldo, 2000);

    sacar(&saldo, 800);

    std::cout << "Saldo atual: " << saldo << "\n";

    return 0;

    
}