#include <iostream>

void exibe_valor(const float *numero){
    std::cout << "Valor do número: " << *numero << "\n";
}


int main(){
    float valor = 14.5;
    exibe_valor(&valor);

    return 0;

}