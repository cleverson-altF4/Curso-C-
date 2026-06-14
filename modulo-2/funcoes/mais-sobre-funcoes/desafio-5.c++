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
    return numero % 2 == 0;
}

int maior_entre_eles(int a, int b, int c){
    
    if (a >= b && a >= c )
    {
        return a;
    } else if (b >= a && b >= c)
    {
        return b;
    } else {
        return c; 
    }
    
   
}

float converter_celsius(float Fahrenheit ){
    float celsius = (Fahrenheit - 32) * 5/9;
    return celsius;
}




int main(){

    int resultado_somar = somar(10,10);
    std::cout<< "A + B: " << resultado_somar << "\n";

    
    float resultado_media = media(101,15,20);
    std::cout<< "Média A,B,C: " << resultado_media << "\n";

    
    bool resultado_ehPar = eh_par(2);
    std::cout<< "Número par ou ìmpar: "<< resultado_ehPar << "\n";

    int resultado_maior_entre_eles = maior_entre_eles(5,1,0);
    std::cout<< "Maior entre eles: " << resultado_maior_entre_eles << "\n";

   
    float resultado_Fahrenheit = converter_celsius(15);
    std::cout<<"Fahrenheit: "<< std::fixed << std::setprecision(2) <<resultado_Fahrenheit << "\n";


}