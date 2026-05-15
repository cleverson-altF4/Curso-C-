/*RPM dos motores — inteiros e aritmética básica
RPM é sempre inteiro (não existe "1500.5 rotações"). Calcule a média de rotação dos 4 motores de um quadcopter.
*/

#include <iostream>
using namespace std;


int main(){
    int motor1 = 1500;
    int motor2 = 1531;
    int motor3 = 1450;
    int motor4 = 1300;
    int resultado;

    resultado = (motor1 + motor2 + motor3, motor4) / 4;

    cout << "Motor 1: " << motor1 << " RPM" << endl;
    cout << "Motor 2: " << motor2 << " RPM" << endl;
    cout << "Motor 3: " << motor3 << " RPM" << endl;
    cout << "Motor 4: " << motor4 << " RPM" << endl;
    cout << "Média: " << resultado << " RPM" << endl;
    return 0;
}