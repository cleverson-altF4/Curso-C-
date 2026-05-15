/*Status do drone — múltiplos bools
Um controlador de voo checa múltiplos status antes de armar. Declare e imprima todos os flags de segurança.
*/

#include <iostream>
using namespace std;

int main(){
    bool imu = true;
    bool gps = true;
    bool bateria = true;
    bool radio = false;
    bool drone = imu && gps && bateria && radio;

    cout << "IMU       " << imu   << endl;
    cout << "GPS       " << gps   << endl;
    cout << "Bateria   " << bateria << endl;
    cout << "Rádio:    " << radio << endl;
    cout << "Lógica Booleana: " << drone << " - False" << endl;

    return 0;
}