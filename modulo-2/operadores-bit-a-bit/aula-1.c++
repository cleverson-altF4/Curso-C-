/*Operador And
    0 & 0 = 0
    0 & 1 = 0
    1 & 0 = 0
    1 & 1 = 1

    por exemplo: 

    a = 12
    b = 10

    00001100
    00001000
   ----------- sabendo que cada bit equivale 128 - 64 - 32 - 16 - 8 - 4 - 2 - 1
    00001000

    teste simples

    0b11000110
    0b01011111
   -------------
    0b01000110 resultado total = 70
*/

#include <iostream>
#include <bitset> //Biblioteca para visualizar binários
using namespace std;

int main(){
    unsigned char a = 0b11000110;
    unsigned char b = 0b01011111;
    unsigned char resultado = a & b;

    cout << "Binário: " << bitset<8>(resultado) << endl;
    cout << "Decimal: " << (int)resultado << endl;

    return 0;

}