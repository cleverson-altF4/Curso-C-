/*Constantes — limites físicos que nunca mudam
Use const para valores que o hardware impõe: altitude máxima, PWM mínimo/máximo. Isso evita bugs graves no firmware.*/

#include <iostream>
using namespace std;


int main(){
    const int pwm_Minimo = 1000; //1s em microsegundos
    const int pwm_Maximo = 2000; //2s em microsegundos
    const float altitude_Maxima = 120.0; //120 metros
    const float tensao_Critica = 11.1; //lipo 3s (bateria baixa)

    cout << "PWM Máximo/Mínimo: " << pwm_Maximo << ", " << pwm_Minimo << " Us" << endl;
    cout << "Altitude máxima: " << altitude_Maxima << " M" << endl;
    cout << "Tensão crítica: " << tensao_Critica << " V" << endl;

    return 0;
}