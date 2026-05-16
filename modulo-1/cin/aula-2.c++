#include <iostream>
#include <string>
using namespace std;


int main(){
    float altura;
    double latitude, longitude;
    int velocidadeMaxima;
    string nomeMissao;

    cout << "=--- Configura o WayPoint ----=\n";

    cout << "Nome da missão: ";
    getline(cin, nomeMissao); //lê linha inteira (com espaços)

    cout << "Latitude: "; cin >> latitude; //Aqui pega o cout e cin tudo em uma linha 
    cout << "Longitude: "; cin >> longitude;
    cout << "Altura: "; cin >> altura;
    cout << "Velocidade Máxima: "; cin >> velocidadeMaxima;

    cout << "=------ Missão completa ----=\n";
    cout << "Missão: " << nomeMissao << "\n";
    cout << "Posição: " << latitude << ", " << longitude << "\n";
    cout << "Velocidade máxima: " << velocidadeMaxima << "\n";

    return 0;


}