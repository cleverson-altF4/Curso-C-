/*Operações com tipos mistos — casting
O que acontece quando você divide dois int? O resultado perde a parte decimal. Isso pode fazer seu PID calcular errado. Veja como evitar.*/

#include <iostream>
using namespace std;

int main(){
    int somaInteiro = 7;
    int numero = 2;

    float mediaInteiro = somaInteiro / numero; //pega 7 divide por 2 (Errado) = 3
    float mediaFloat = float(somaInteiro) / numero; //Pega 7 divide por 2 (Certo) = 3.5

    cout << "Número inteiro: " << mediaInteiro << endl;
    cout << "Numero decimal: " << mediaFloat << endl;

    return 0;


}