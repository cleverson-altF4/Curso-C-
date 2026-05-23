/*Desafio usando a lógica And & - sozinho*/
//Sistema de emergência do drone

#include <iostream>
using namespace std;
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

int main(){
    const uint8_t telemetria = 0b01001111;
    const uint8_t motores = (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3);
    const uint8_t sensores = (1 << 4) | (1 << 5);
    const uint8_t sinalPerdido = (1 << 6);
    const uint8_t bateriaCritica = (1 << 7);

    if ((telemetria & motores) == motores)
    {
        cout << "Status: Está tudo certo!" << endl;
    } else {
        cout << "Status: FALHA NOS MOTORES" << endl;
    }

    if ((telemetria & sensores) == sensores)
    {
        cout << "Está tudo certo com os sensores" << endl;
    } else {
        cout << "Falha nos sensores" << endl;
    }

    if (telemetria & sinalPerdido)
    {
        cout << "EMERGÊNCIA: sinal perdido" << endl;
    } else {
        cout << "Sinal: OK" << endl;
    }

    if (telemetria & bateriaCritica)
    {
        cout << "EMERGÊNCIA: bateria crítica" << endl;
    } else {
        cout << "BATERIA: OK" << endl;
    }
    

    return 0;
    
}