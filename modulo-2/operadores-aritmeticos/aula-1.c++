/*Calculadora de voo*/
#include <iostream>
#include <cmath>
using namespace std;

const float GRAVIDADE = 9.81f; //gravidade m/s²
const float FATOR_SEGURANCA = 1.3f; //margem de segurança do empuxo
const float EFICIENCIA_MOTOR = 0.85f; //eficiência do motor 85%


int main(){
    float massaDrone, cargaUtil;
    float distancia;
    int tempoVoo;   

    cout << "=---- Calculadora de voo -----=\n";
    cout << "Massa do drone (kg): ";
    cin >> massaDrone;
    cout << "Distância (m): ";
    cin >> distancia;
    cout << "Tempo de voo: ";
    cin >> tempoVoo;
    cout << "Carga util (kg): ";
    cin >> cargaUtil;

    // Peso total em Newtons: F = m × g
    float pesoTotal = (massaDrone + cargaUtil) * GRAVIDADE;

    //Empuxo mínimo necessário (com margem de segurança)
    float empuxo = pesoTotal * FATOR_SEGURANCA;

    // Potência estimada: empuxo / eficiência do motor
    float potencia = empuxo * EFICIENCIA_MOTOR;

    // Velocidade média: v = d / t (cast para evitar div inteira)
    float velocidade = distancia * (float)tempoVoo;

    //// Velocidade em km/h: m/s × 3.6
    float velocidade_KM = velocidade * 3.6;
    
    // Resto: ticks de controle já executados neste segundo
    int   ticks       = tempoVoo * 400;   // 400 Hz
    int   ticksResto  = ticks % 1000;    // ciclos no segundo atual


    cout << "=------ Relatório final ------=\n";
    cout << "Peso total: " << pesoTotal << "\n";
    cout << "Empuxo: " << empuxo << "\n";
    cout << "Potência: " << potencia << "\n";
    cout << "Velocidade: " << velocidade << " | " << velocidade_KM << "\n";
    cout << "Ticket resto: " << ticksResto << "\n";

    return 0;

}