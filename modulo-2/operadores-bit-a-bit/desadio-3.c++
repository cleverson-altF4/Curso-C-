/*Desafio 3 usando OR | */

#include <iostream>
using namespace std;

int main(){
    const uint8_t motoresArmados = 0b00000001; //(1 << 0)
    const uint8_t bateriaOk = 0b00000010; //(1 << 1)
    const uint8_t radioOk = 0b00000100; //(1 << 2)
    const uint8_t gpsOk = 0b00001000; //(1 << 3)
    const uint8_t cameraOk = 0b00010000; //(1 << 4)
    const uint8_t modoAuto = 0b00100000; //(1 << 5)

    uint8_t status = 0;

    status |= bateriaOk;
    cout << "Status bateria: "  << (int)status <<  endl;

    status |= radioOk;
    cout << "Status rádio: " << (int)status << endl;

    status |= gpsOk;
    cout << "Status gps: " << (int)status << endl;

    status |= cameraOk;
    cout << "Status câmera: " << (int)status << endl;

    status |= motoresArmados;
    cout << "Motores armados: " << (int)status << endl;

    const uint8_t preVOO = bateriaOk | gpsOk | radioOk;
    
    if ((status & preVOO)== preVOO)
    {
        cout << "Liberado" << endl;
    } else {
        cout << "Bloqueado" << endl;

    }   
    
    return 0;
}