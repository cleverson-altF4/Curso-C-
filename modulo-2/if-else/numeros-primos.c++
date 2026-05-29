#include <iostream>
using namespace std;

int main(){
    int numero;
    bool flag = true;

    cout << "Digite um número ", cin >> numero;

    if (numero <= 1)
    {
        cout << "Número " << numero << " menor que 1" << endl;
        flag = false;
    }
    
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            flag = false;
            break;
        }
        
    }
    
    cout << "---- Resultado ---\n";

    if (flag == true)
    {
       cout << "Número " << numero << " é primo" << endl;

    } else {
        cout << "Número " << numero << " não é primo" << endl;
    }
    
}