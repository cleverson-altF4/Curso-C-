/*Desafio usando operador And &*/

#include <iostream>
using namespace std;

int main(){
    const uint8_t gps = 0b00100000;
    const uint8_t radio = 0b00010000;
    const uint8_t armado = 0b00000100;

    uint8_t status = (1 << 5) | (1 << 4) | (1 << 2);

    if (status & gps)
    {
        cout << "Gps: Ok" << endl;
    } else {
        cout << "Gps: Falha" << endl;
    }
    
    if (status & radio)
    {
        cout << "Rádio: Ok" << endl;

    } else {
        cout << "Radio: Falha" << endl;
    }

    const uint8_t pre_VOO = gps | radio | armado;

    if ((status & pre_VOO) == pre_VOO)
    {
        cout << "Pré voo: Aprovado" << endl;
    } else {
        cout << "Pré voo: Reprovado" << endl;
    }
    
    
    return 0;

}