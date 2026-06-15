#include <iostream>
#include "geometria.h"
#include <iomanip>

//--> Esse é o Main

int main(){
    float res_circulo = area_circulo(15);
    std::cout << "Área do circulo: " << std::fixed << std::setprecision(2) << res_circulo << "\n";

    float res_retangulo = area_retangulo(6, 8);
    std::cout << "Área do retangulo: " << std::fixed << std::setprecision(2) << res_retangulo << "\n";


    float res_triangulo = area_triangulo(1.5, 5.3);
    std::cout << "Área do triangulo: " << std::fixed << std::setprecision(2) << res_triangulo << "\n";

    float res_PerimetroQuadrado = perimetro_do_quadrado(6);
    std::cout << "Perimetro do quadrado: " << std::fixed << std::setprecision(2) << res_PerimetroQuadrado << "\n";


    
}