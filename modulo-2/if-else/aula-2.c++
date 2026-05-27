#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor;
    float porcent_10 = 0.10;
    float porcent_20 = 0.20;

    cout << "Digite um valor desejado: ", cin >> valor;

    if (valor > 100)
    {
        valor = valor - (valor * porcent_10);
        
        cout << "O Valor acima de R$100 terá o desconto de 10%: " << endl;
        cout << "O valor total será de R$ " << fixed << setprecision(2) << valor << " reais" << endl;
    } else if (valor > 500)
    {
        valor = valor - (valor * porcent_20);
        
        cout << "O valor acima de R$ 500.00 reais terá o desconto de 20%" << endl;
        cout << "o valor total será de R$ " << fixed << setprecision(2) << valor << " reais" << endl;
    }
    
    
    
    return 0;
}