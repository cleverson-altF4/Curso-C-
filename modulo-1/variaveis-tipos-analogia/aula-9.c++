/*Altitude e velocidade — double vs float
GPS retorna coordenadas com altíssima precisão. Compare float (7 dígitos) com double (15 dígitos) para entender quando cada um importa.*/

//#include <iomanip>: O nome vem de Input/Output Manipulation. Ela serve para "formatar" como os dados aparecem. No seu código, ela é usada para controlar quantas casas decimais aparecem na tela (através do setprecision).


//A Formatação de SaídaA linha crucial aqui é:cout << fixed << setprecision(6);fixed: Força o compilador a usar a notação de ponto fixo (ex: 123.45) em vez de notação científica (ex: $1.23e+02$).setprecision(6): Define que, a partir daquele momento, todos os números decimais exibidos terão exatamente 6 casas após a vírgula.


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float altitudeFloat = 123.456789; //usando float
    double altitudeDouble = 123.456789; //Usando double
    double latitudeGps = -12.156423; //Latitude imaginária


    cout << fixed << setprecision(6); //fixed ele coloca apenas 123. e o setprecision ele coloca 6 números depois da virgula
    cout << "Altitude float: " << altitudeFloat << endl;
    cout << "Altitude Double: " << altitudeDouble << endl;
    cout << "Latitude gps: " << latitudeGps << endl;


    return 0;
}