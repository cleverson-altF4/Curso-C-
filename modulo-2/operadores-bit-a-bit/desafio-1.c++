/*Desafio usando a lógica And & - sozinho*/
//Sistema de emergência do drone

#include <iostream>
using namespace std;

int main(){
    const uint8_t telemetria = 0b01001111;

    /*
    (1 << 7) - bateria critica
    (1 << 6) - Sinal perdido
    (1 << 5) - Bússula ok
    (1 << 4) - Barometro
    (1 << 3) - Motor dianteiro
    (1 << 2) - Motor traseiro
    (1 << 1) - Motor esquerdo
    (1 << 0) - Motor direito
     telemetria = 0b01001111
    */

    
}