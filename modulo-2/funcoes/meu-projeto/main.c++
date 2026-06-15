/*Funções em múltiplos arquivos (.h e .cpp)*/

//Esse é o ---> main

#include <iostream>
#include "matematica.h"

int main(){
   int res_somar = somar(2,2);
   std::cout << "Soma: " << res_somar << "\n";
   
   int res_subtrair = subtrair(2,1);
   std::cout << "Subtração: " << res_subtrair << "\n";

   int res_multiplicar = multiplicar(2,2);
   std::cout << "Multiplicação: " << res_multiplicar << "\n";
}