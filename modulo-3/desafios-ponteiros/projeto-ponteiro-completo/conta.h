#ifndef CONTA_H
#define CONTA_H

void depositar(int* saldo, int valor);
void sacar(int* saldo, int valor);
void exibirSaldo(int*saldo);
bool saldoSuficiente(int*saldo, int valor);


#endif