#include <iostream>
using namespace std;

bool drone(int status){
    return status & (1 << 0);
}

int main(){
    int status = 0b00000001;

    if (drone(status))
    {
        cout << boolalpha << endl;
        cout << "Drone ativo " << drone(status) << endl; 
    }
    
}