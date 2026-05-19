#include <iostream>
using namespace std;

int main(){
    int a = 7;
    int b = 2;
    int divisaoInteiro;
    float divisaoReal;

    divisaoInteiro = a / b;
    divisaoReal = (float)a / b;

    cout << "Divisão inteira: " << divisaoInteiro << endl;
    cout << "Divisão real: " << divisaoReal << endl;

    return 0;

}