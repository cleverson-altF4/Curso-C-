/*Desafio 2 usando operador bitwise OR |

*/

#include <iostream>
using namespace std;

int main(){
    const uint8_t gpsOK = 0b00100000;  //(1 << 5)
    const uint8_t radio = 0b00010000;  //(1 << 4)
    const uint8_t armado= 0b00000100;  //(1 << 2)

    uint8_t status = 0;

    //Liga o gps 
    status |= gpsOK; 
    cout << "GPS - status: " << (int)status << endl;


    status |= radio;
    cout << "Rádio - status: " << int(status) << endl;

    status |= armado;
    cout << "Motores armados - Status: " << int(status) << endl;

    const uint8_t verificar = gpsOK | radio | armado;

    if ((status & verificar)== verificar)
    {
        cout << "Verificação: Aprovado" << endl;
    } else {
        cout << "Verificação: Reprovado";
    }
    

    return 0;
}