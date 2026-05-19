#include <iostream>
using namespace std;

int main(){
    bool promocao = false;
    bool feriado = true;
    bool verificar = promocao || feriado;

    cout << "O uso do ||: " << verificar << endl;

    bool verificacao = !promocao;

    cout << "O uso do !: " << verificacao << endl;

    return 0;
}