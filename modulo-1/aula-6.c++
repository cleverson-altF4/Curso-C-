/*
Tensão da bateria LiPo — float e precisão decimal
Uma LiPo 4S tem tensão nominal de 14.8V. Use float para representar valores com casas decimais como tensão e corrente.*/

#include <iostream>
using namespace std;

int main(){
    float tensaoTotal = 14.8; //Tensão máxima de volts (4 células)
    float tensaoHelice = tensaoTotal / 4.0;  //resultado de 3.7 (Total de hélices 4)
    float tensaoMinima = 12.0;  //Fail (precisa pousar)
    bool bateriaDrone = (tensaoTotal > tensaoMinima); //Aqui seria verdadeiro, caso inverta é falso

    cout << "Tensão total " << tensaoTotal << " V" << endl;
    cout << "Tensão da hélice: " << tensaoHelice << " v" << endl;
    cout << "Tensao mínima: " << tensaoMinima << " V" << endl;
    cout << "Bateria: " << bateriaDrone << endl;

    return 0;
}