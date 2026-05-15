/*Telemetria completa — todos os tipos juntos
Simule um pacote de telemetria real combinando todos os tipos que aprendeu hoje. Este é o tipo de dado que um GCS (Ground Control Station) recebe.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // --- PACOTE DE TELEMETRIA v1.0 ---
    char   modo       = 'S';
    bool   armado     = true;
    float  altitude   = 45.3;
    float  roll       = -2.1;
    float  pitch      =  1.8;
    int    throttle   = 1650;  // PWM em microssegundos
    float  tensao     = 14.2;
    double latitude   = -19.912998;
    double longitude  = -43.940933;

    cout << fixed << setprecision(2);
    cout << "=== TELEMETRIA ==="       << endl;
    cout << "Modo:      " << modo       << endl;
    cout << "Armado:    " << armado     << endl;
    cout << "Alt:       " << altitude   << " m"  << endl;
    cout << "Roll:      " << roll       << "°"   << endl;
    cout << "Pitch:     " << pitch      << "°"   << endl;
    cout << "Throttle:  " << throttle   << " us" << endl;
    cout << "Tensão:    " << tensao     << "V"   << endl;
    cout << setprecision(6);
    cout << "Lat/Lon:   " << latitude << ", " << longitude << endl;
    return 0;
}