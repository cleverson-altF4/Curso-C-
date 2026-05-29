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
    
    return 0;
}