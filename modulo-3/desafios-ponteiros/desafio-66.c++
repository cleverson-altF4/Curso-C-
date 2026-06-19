#include <iostream>

void aplicarBonus(int* salario, int bonus){


    if (salario == nullptr)
    {
        std::cout<< "Salário inválido\n";
    } else {
        *salario += bonus;
    }
    
}

int main(){
    int salario = 2000;
    std::cout<<"Salário antes: " << salario << "\n";

    aplicarBonus(&salario, 500);

    std::cout<<"Salário depois do ptr: " << salario << "\n";

    aplicarBonus(nullptr,3);

    return 0;
}