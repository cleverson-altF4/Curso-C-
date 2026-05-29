#include <iostream>
using namespace std;

int main(){
    int anterior = 0;
    int atual = 1;
    int proximo;

    cout << "Anterior " << anterior << endl;
    cout << "Atual " << atual << endl;

    for (int i = 0; i < 10; i++)
    {
        proximo = anterior + atual;

        cout << "Próximo: " << proximo << endl;

        anterior = atual;
        atual = proximo;

    }
    
    return 0;
}