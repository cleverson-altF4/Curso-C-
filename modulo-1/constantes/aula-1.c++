/*Constantes 

3 formas de criar constantes em C++
1: 
const — constante tipada, verificada pelo compiladorrecomendada

const float  ALT_MAX  = 500.0f;  // altitude máxima em metros
const float  BAT_MIN  = 20.0f;   // bateria mínima em %
const int    SAT_MIN  = 6;        // satélites GPS mínimos
const double LAT_BASE = -23.5505; // latitude da base 
-----------------------------------------------------------------
2:
constexpr — calculado em tempo de compilação, mais eficienteC++11

constexpr float LOOP_HZ    = 400.0f;
constexpr float LOOP_US    = 1000000.0f / LOOP_HZ; // 2500 µs
constexpr int   PWM_MIN    = 1000; // µs — motor desligado
constexpr int   PWM_MAX    = 2000; // µs — motor full throttle
------------------------------------------------------------------
3:
#define — macro do pré-processador, sem tipoevitar em C++

#define ALT_MAX 500   // sem tipo — compilador não protege
#define PI 3.14159    // ainda comum em código legado/Arduino
// prefira const ou constexpr — mais seguro
*/

#include <iostream>
using namespace std;

const float ALTURA_MAXIMA = 500;
const float BATERIA_MAX = 20;
const int SATELITES_MIN = 6;
constexpr int PWM_IDLE = 1000;
constexpr int PWM_MAX = 2000;

int main(){
    float altitudeAtual;
    float bateria;
    int satelites;

    cout << "=--- Configuração do VOO ---=\n";
    cout << "Altitude Máxima: " << ALTURA_MAXIMA << " M\n";
    cout << "Bateria Máxima: " << BATERIA_MAX << " %\n";
    cout << "Sátelites Mínimo: " << SATELITES_MIN << "\n";
    cout << "PWM IDLE: " << PWM_IDLE << "\n";
    cout << "PWM Máximo: " << PWM_MAX << "\n";

    cout << "=---- Minhas configurações ----=\n";
    cout << "Altitude desejada: ";
    cin >> altitudeAtual;

    cout << "Bateria desejada: ";
    cin >> bateria;

    cout << "Quantos sátelites: ";
    cin >> satelites;

    cout << "=------ RESULTADO FINAL -----=\n";
    cout << "Altitude atual: " << altitudeAtual << " | " << "Altiude Máxima: " << ALTURA_MAXIMA << " Metros\n";
    cout << "Bateria atual: " << bateria << " | " << "Bateria Máxima: " << BATERIA_MAX << " %\n";
    cout << "Sátelites atual: " << satelites << " | " << "Satélite Mínimo: " << SATELITES_MIN << "\n";
    cout << "PWM IDLE: " << PWM_IDLE << "\n";
    cout << "PDM Máximo: " << PWM_MAX << "\n";

    return 0;


    
}
