/*Funções com parâmetros*/

#include <iostream>

void multiplicar(int numero1, int numero2){
    int resultado = numero1 * numero2;
    std::cout << " " << numero1 << " *" << " " << numero2 << " = " << resultado << "\n";
}

void maior(int a, int b){
    if (a > b)
    {
        std::cout<< "A é maior que B" << "\n";
    } else if (b > a)
    {
        std::cout << "B é maior que A" << "\n";
    } else if (a == b)
    {
        std::cout << "São iguais" << "\n";
    } 
    
}

void apresentar_pessoa(std::string nome, int idade){
    std::cout << "Nome: " << nome << " | " << " Idade: " << idade << "\n";
}

void tabuada(int n){
    for (int i = 1; i <= n; i++)
    {
        int resultado = i * n;
        std::cout << " " << n << " *" << " " << i << " = " << resultado << "\n";
    }
    
}

void temperatura(float celsius){
    float Fahrenheit = (celsius * 9/5) + 32;
    std::cout <<"Fahrenheit: " << Fahrenheit << "\n";
}




int main(){
    multiplicar(2, 2);
    maior(4,2);
    apresentar_pessoa("clevison", 31);
    tabuada(10);
    temperatura(15);

    return 0;
}