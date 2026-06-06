/*Sistema de controle de voo*/

#include <iostream>
using namespace std;

void linha(){
    cout << "----------------------------------" << endl;
}

bool verificarCombustivel(int nivel){
    if (nivel > 20 )
    {
        cout << "Combustível ok" << endl;
        return true;
    } else {
        cout << "Combustível crítico" << endl;
        return false;
    }
    
}

void descerAltitude(int altitude){
    do
    {
       altitude = altitude - 10;
       cout << "Altitude atual a cada iteração. " << altitude << endl;
       if (altitude <= 0)
       {
            cout << "O drone pousou" << endl;
       }
       

    } while (altitude > 0);
    
}

void modoDrone(int modo){
    switch (modo)
    {
    case 1:
        cout << "Decolando" << "\n";
        break;
    case 2:
        cout << "Voando" << "\n";
        break;
    case 3:
        cout << "Pousando" << "\n";
        break;
    default:
        cout << "Modo desconhecido" << "\n";
        break;
    }
}



int contarAtivos(int drones[], int tamanho){
    int acumulador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (drones[i] == 1)
        {
            acumulador++;
        }
        
    }

    return acumulador;
    
}


int main(){
    int drones[5] = {
        1,0,1,1,0
    };

    linha();
   
    verificarCombustivel(21);
    

    linha();

    descerAltitude(50);

    linha();

    int total = contarAtivos(drones, 5);
    cout << "Drones ativos " << total << endl;

    linha();

    modoDrone(1);
    modoDrone(2);
    modoDrone(3);
    modoDrone(99);


    return 0;

}