/*Calculadora de autonomia*/

#include <iostream>
using namespace std;


int main(){
    int capacidade;
    float consumo;
    float autonomia;

    cout << "=------ Calculadora de autonomia ------=\n";
    cout << "Capacidade bateria: ";
    cin >> capacidade;

    cout << "Consumo (mAh/min): ";
    cin >> consumo;

    autonomia = (float)capacidade / consumo; //Fiz um cast de inteiro para decimal

    cout << "=------- Resultado -------=\n";
    cout << "Capacidade de voo: " << autonomia << "%\n";

    return 0;

}
