/*Operador Or = |

    0 | 0 = 0
    1 | 0 = 1
    0 | 1 = 1
    1 | 1 = 1  *Basta apenas 1 para ser verdadeiro


    por exemplo:

    0b11001010
    0b01001101
   ------------
    0b11001111 = resultado  128+64+8+2+1 = 207

*/

#include <iostream>
#include <bitset>
using namespace std; 

int main(){
    unsigned char a = 0b11001010;
    unsigned char b = 0b01001101;
    unsigned char resultado = a | b;

    cout << "Binário: " << bitset<8>(resultado) << endl;
    cout << "Decimal: " << (int)resultado << endl;  //Usando um cast para transformar string em inteiro

    return 0;

}