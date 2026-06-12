/*função de sobrecarga*/
#include <iostream>
int somar(int a, int b){
    return a + b;
    
}

double somar(double a, double b){
    return a + b;
}

int main(){
    somar(5,2);
    somar(2.4, 2.5);
    std::cout << somar(5,2) << "\n";
    std::cout << somar(2.4, 2.5) << "\n";
}