/*Variáveis do IMU — declarar dados do sensor
O IMU ( MPU6050 ) retorna ângulos em float e status em bool. Declare as variáveis como seriam num firmware real.*/

#include <iostream>
using namespace std;

int main(){
    //Dados do IMU (Giroscopio + aceleração)

    float inclinacaoLateral = 12.0;
    float inclinacaoFrontal = 15.0;
    float rotacaoVertical = 17.0;
    bool sensorConectado = true;
    int contadorAmostras = 5;

    
    cout << "Inclinação lateral: " << inclinacaoLateral << "" << endl;
    cout << "Inclinação Frontal: " << inclinacaoFrontal << "" << endl;
    cout << "Rotação vertical: " << rotacaoVertical << "" << endl;
    cout << "Sensor conectado: " << sensorConectado << "- Verdadeiro" << endl;
    cout << "Contador Amostras: " << contadorAmostras << "" << endl;

    return 0;

}