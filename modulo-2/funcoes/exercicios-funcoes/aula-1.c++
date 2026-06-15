//Função básica
#include <iostream>

int numero(int a, int b){
        return a + b;
}

int main(){

    int res = numero(4,5);
    std::cout << "Resultado " << res << std::endl;

    return 0;

}