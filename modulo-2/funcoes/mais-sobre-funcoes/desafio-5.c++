/*Tópico 3 — Funções com retorno (int, float, bool)

Até agora suas funções faziam tudo internamente e imprimiam direto. Agora a função vai calcular e devolver o resultado para quem chamou — e quem chamou decide o que fazer com ele.

*/

#include <iostream>
#include <iomanip>


int somar(int a, int b){
    return a + b;
}

float media(float a, float b, float c){
    float media = (a + b + c) / 3;
    return media;
}

bool eh_par(int numero){
    if (numero % 2==0)
    {
        return true;
    }
    
}

int maior_entre_eles(int a, int b, int c){
    
    if (a >= b && a >= c )
    {
        std::cout << "Maior é A: " << a << "\n"; 
    } else if (b >= a && b >= c)
    {
        std::cout<< "Maior é B: " << b << "\n";
    } else {
        std::cout<< "Maior é C: " << c << "\n"; 
    }
    
    return;
}




int main(){

    int resultado_somar = somar(10,10);
    std::cout<< "A + B: " << resultado_somar << "\n";

    
    float resultado_media = media(101,15,20);
    std::cout<< "Média A,B,C: " << resultado_media << "\n";

    
    int resultado_ehPar = eh_par(2);
    std::cout<< "Número par ou ìmpar: "<< resultado_ehPar << "\n";

    int resultado_maior_entre_eles = maior_entre_eles(10,1,0);
    std::cout<< "Maior entre eles: " << resultado_maior_entre_eles << "\n";


}