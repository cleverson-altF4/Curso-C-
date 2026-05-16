/*Checklist de pré voo*/

#include <iostream>
using namespace std;

int main(){
    float temperaturaMotor;
    float nivelBateria;
    int numeroSatelite;
    

    cout << "=---- Leitura de sensores -----=\n";
    cout << "Temperatura do motor: ";
    cin >> temperaturaMotor;

    cout << "Nível de bateria: ";
    cin >> nivelBateria;

    cout << "Números de sátelites: ";
    cin >> numeroSatelite;


    cout << "=-- Resumo do pré voo --=\n";
    cout << "Temperatura do motor: " << temperaturaMotor << "°\n";
    cout << "Bateria: " << nivelBateria << "%\n";
    cout << "Números de sátelites: " << numeroSatelite << "\n";

    if (temperaturaMotor < 80 && nivelBateria > 20 && numeroSatelite >= 6 )
    {
        cout << "Está apto para o VOO\n";
    } else {
        cout << "Não pode voar\n";
    }
    

    return 0;
}