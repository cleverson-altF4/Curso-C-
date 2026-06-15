#include "geometria.h"

//--> Esse é o geometria.c++

float area_circulo(float raio){
    float circulo = 3.14159 * raio * raio;
    return circulo;
}


float area_retangulo(float largura, float altura){
    float retangulo = largura * altura;
    return retangulo;
}   


float area_triangulo(float base, float altura){
    float triangulo = (base * altura) / 2;
    return triangulo;
}

float perimetro_do_quadrado(float lado){
    float perimetro = lado * 4;
    return perimetro;
}



