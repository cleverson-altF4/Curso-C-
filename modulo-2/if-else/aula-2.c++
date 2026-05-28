#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor;
    float porcent_10 = 0.10;
    float porcent_20 = 0.20;

    cout << "Digite um valor desejado: ", cin >> valor;

    if (valor > 500)
    {
        valor = valor - (valor * porcent_20);
        
        cout << "O Valor acima de R$ 500.00 terá o desconto de 20%: " << endl;
        cout << "O valor total será de R$ " << fixed << setprecision(2) << valor << " reais" << endl;
    } else if (valor > 100)
    {
        valor = valor - (valor * porcent_10);
        
        cout << "O valor acima de R$ 100.00 reais terá o desconto de 10%" << endl;
        cout << "o valor total será de R$ " << fixed << setprecision(2) << valor << " reais" << endl;
    } else {
        cout << "O valor não terá desconto" << endl;
        cout << "O valor da compra será de R$ " << valor << " reais" << endl;
    }
    
    cout << "\n";

    //Contador ìmpares

    cout << "..... Números ìmpares ....\n";

   for (int i = 1; i < 50; i++)
   {
        if (i % 2 == 1)
        {
            cout << "Números Ímpares: " << i << endl;
        }
        
   }

   cout << "\n";

   cout << ".....  Simulador de senhas .....\n";

   int senha;
   int tentativas = 3;
   int contador = 0;

   do
   {    

        cout << "Digite a sua senha: ", cin >> senha;

        contador++;

        if (senha == 1234)
        {
            cout << "Acesso liberado" << endl;
            break;
        }
        
        if (senha == tentativas)
        {
            cout << "Tentativas " << contador << " vezes" << endl;

        } else {
            cout << "Senha incorreta" << endl;
            cout << "Você usou " << contador << " de " << tentativas << " tentativas" << endl;
        }
        
    
   } while (senha != 1234 && contador < tentativas);
        
    if (senha != 1234 && contador == tentativas)
    {
        cout << "Acesso bloqueado! Limite de tentativas excedidas" << endl;
    }
    
    
    return 0;
}