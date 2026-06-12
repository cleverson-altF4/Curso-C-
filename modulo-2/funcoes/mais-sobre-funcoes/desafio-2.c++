/*Funções lambdas*/

#include <iostream>
using namespace std;

auto somando = [](int a, int b){
    return a + b;
};

int main(){
    int valor = somando(1, 1);
    cout << "Valor: " << valor << "\n";
    return 0;
}