#include <iostream>
using namespace std;

int main(){
    float altitudeAlvo;
    int modoVoo;

    cout << "Digite uma altitude: ";
    cin >> altitudeAlvo;

    cout << "Modo de voo: [1: Manual, 2: auto 3: RTH]: ";
    cin >> modoVoo;

    cout << "=------ Missão configurada -----=\n";
    cout << "subido para " <<altitudeAlvo << " Metros\n";
    cout << "Modo selecionado: " << modoVoo << "\n";

    return 0;
}