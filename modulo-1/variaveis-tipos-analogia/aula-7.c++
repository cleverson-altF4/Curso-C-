/*
Modo de voo com char — código de estado
Firmwares usam char para modos: 'M' = manual, 'S' = stabilize, 'A' = auto. Declare e imprima o modo atual.*/

#include <iostream>
using namespace std;

int main(){
    char voo = 'S'; //Estabilize
    char nivelPiloto1 = 1; //Iniciante
    char nivelPiloto2 = 2; //Intermédiario
    char nivelPiloto3 = 3; // Avançado

    cout << "Modo de voo ativo: " << voo << "tabilze" << endl;
    cout << "Nível do piloto: " << nivelPiloto1 << "Iniciante" << endl;
    cout << "Nível do piloto: " << nivelPiloto2 << "Intermediário" << endl;
    cout << "Nível do piloto: " << nivelPiloto3 << "Avançado" << endl;
    cout << "Valor ASCII do modo: " << voo << (int)voo << endl; //(int)voo ele declara um type casting uma conversão de tipo.

    return 0;
}