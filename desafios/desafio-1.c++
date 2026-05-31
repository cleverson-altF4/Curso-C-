/*Inicialização da frota*/

#include <iostream>
using namespace std;

int main(){
    int drones = 0b10110101; //8 drones  1 = ativo / 0 = inativo

    for (int i = 0; i < 8; i++)
    {
       int bit = (1 << i) & drones;
        
        if (bit)
        {
            cout << "Drone " << i << " : Ativo" << endl;   
        } else {
            cout << "Drone " << i << " : Inativo" << endl; 
        }
        
    }

    cout << "\n ---  Nivel de combustível ---\n";

    int nivelCombustivel[8] = {85,0,42,0,91,0,17,0};
    int somaTotal = 0;
    int contador = 0;
    int atual = 0;
    int totalConsumido = 0;
    


    for (int i = 0; i < 8; i++)
    {
        atual = nivelCombustivel[i];


        if (atual == 0)
        {
            continue;
        }
        
        if (i & 1)
        {
            cout << "Ìmpar " << i << endl;
        } else {

            cout << "Par " << i << endl;
        }
        
        contador++;

        somaTotal += atual;

        int gasto  = 100 - atual;
        totalConsumido += gasto;

        cout << "O drone tem " << atual << " e gastou " << gasto << endl;

    }
    
    if (contador > 0)
    {
        float media = (float)somaTotal / contador;

        cout << "Drones ativos: " << contador << endl;
        cout << "Total consumido: " << totalConsumido << endl;
        cout << "Média: " << media << endl;
    } else {
        cout << "Não tem drones" << endl;
    }
    

    return 0;
}