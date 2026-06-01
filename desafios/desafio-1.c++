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

    cout << "\n ---- Missão ----\n";

    int setor = 1;

    do
    {
        int sensor = (setor * 3 + 7) % 10 + 1;
        

        if (sensor > 7 && setor % 2 == 1)
        {
            cout << "AMEAÇA CRÌTICA" << endl;
            break;
        } else if (sensor > 7 && setor % 2 == 0)
        {
            cout << "Setor " << setor << " Aviso!" << endl;
            setor++;
            continue;
        } else {
            cout << "Setor " << setor << " limpo" << endl;
            setor++;
        }
        
        
    } while (setor <= 20);


    cout << "\n --- Sincronizar duas frotas ---\n";

    int frotaA = 0b11001010;
    int frotaB = 0b01110011;
    int somatoria = 0;
   


    for (int i = 0; i < 8; i++)
    {
        bool ativoA = true;
        bool ativoB = true;

        cout << "Frota A: " << frotaA[i] << endl;
        
        
    }
    

    return 0;
}