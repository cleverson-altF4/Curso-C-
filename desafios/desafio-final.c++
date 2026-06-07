/*Central de controle de frota*/

#include <iostream>
using namespace std;


bool combustivelOk(int nivel){
   
    if (nivel > 20)
    {
        return true;
    } else {
        return false;
    }
    
    
}

bool estaAtivo(int statusDrone){
  
    if (statusDrone != 0)
    {
        return true;

    } else {

        return false;
    }
    
    
}

void exibirModo(int modo){
    switch (modo)
    {
    case 1:
        cout << "Patrulha" << endl;
        break;

    case 2:
        cout << "Resgate" << endl;
        break;

    case 3:
        cout << "Retorno" << endl;
        break;
    
    default:
        cout << "Inativo"<< endl;
        break;
    }
}

int contarBits(int valor){
    int contador = 0;

    for (int i = 0; i < 8; i++)
    {
        int bit = (1 << i) & valor;

        if (bit != 0)
        {
            contador++;
        }
        
    }

    return contador;
    
}

void descer(int altitude){
    do
    {
        altitude = altitude - 20;
        cout << "Altitude atual " << altitude << endl;

        if (altitude <= 0 )
        {
            cout << "Drone pousou" << endl;
            break;
         }
        
    } while (altitude > 0);
    
}

void processarDrone(int id, int comb, int alt, int stat, int mod){

    if (!estaAtivo(stat))
    {
        cout << "Drone " << id << " está inativo" << endl;
        return;
    }

    if (!combustivelOk(comb))
    {
        cout << "Drone " << id << " sem combustível" << endl;
        return;
    }

    cout << "Id: " << id << endl;
    exibirModo(mod);

    int resultado = contarBits(stat);
    cout << "Bits ativos " << resultado << endl;
    
    
   
}



int main(){

    int ads[6] = {1,2,3,4,5,6};
    int combustivel[6] = {80,15,0,55,92,30};
    int altitude[6] = {120, 45,0,200,80,60};

    int status[6] = {
        0b00000001, 
        0b00000011, 
        0b00000000, 
        0b00000111, 
        0b00000010, 
        0b00000100
    };

    int modo[6] = {1,3,0,2,1,3};


   
   
    
}