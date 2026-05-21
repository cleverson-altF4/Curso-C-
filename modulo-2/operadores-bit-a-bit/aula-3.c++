/* Operador Xor ou exclusivo or

    0 ^ 0 = 0
    0 ^ 1 = 1
    1 ^ 0 = 1
    1 ^ 1 = 0  -> Xor é quando são diferentes

    exempo:

        0b01101010
        0b10101011
       ------------
        0b11000001 --> resultado 128+64+1 = 193

*/

#include <iostream>
#include <bitset>
using namespace std;

int main(){
    unsigned char a = 0b01101010;
    unsigned char b = 0b10101011;

    unsigned char resultado = a ^ b;

    cout << "Binário: " << bitset<8>(resultado) << endl;
    cout << "Decimal: " << (int)resultado << endl;

    return 0;
}