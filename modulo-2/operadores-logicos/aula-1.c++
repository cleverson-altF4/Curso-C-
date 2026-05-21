#include <iostream>
using namespace std;

int main(){
    
    float bateria = 14;
    bool gps = true;
    bool portaFechada = true;
    
    if (bateria >= 15 && gps && portaFechada)
    {
        cout << "decolagem permitida" << endl;
    } else {
        if (bateria < 15)
        {
            cout << "Bateria está abaixo de 15%" << endl;
        } 
        
        if (!gps)
        {
            cout << "Bateria não está conectada" << endl;
        }

        if (!portaFechada)
        {
            cout << "A porta não está fechada" << endl;
        }
        
        
    }
    
    return 0;

}