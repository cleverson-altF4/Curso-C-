/*Switch case*/

#include <iostream>

int main(){
   int numero1;
   int numero2;
   int somaTotal;
   char operacao;

    std::cout << "Digite um número: ";
    std::cin >> numero1;

    std::cout << "qual operação +-*/: ";
    std::cin >> operacao;

    std::cout << "digite outro número ";
    std::cin >> numero2;

    std::cout << "Operação + - * / " << std::endl; 

   switch (operacao)
   {
   case '+':
        somaTotal =  numero1 + numero2;
        std::cout << " " << numero1 <<  "+" << " " <<  numero2 << " =" << somaTotal << std::endl;
        break;
    case '-':
        somaTotal =  numero1 - numero2;
        std::cout << " " << numero1 <<  "-" << " " <<  numero2 << " =" << somaTotal << std::endl;
        break;
    case '*':
        somaTotal =  numero1 * numero2;
        std::cout << " " << numero1 <<  "*" << " " <<  numero2 << " =" << somaTotal << std::endl;
        break;
    case '/':
        
        if (numero2 == 0)
        {
            std::cout << "Divisão por zero não é permitido" << std::endl;
            break;
        } else {
            somaTotal =  numero1 / numero2;
            std::cout << " " << numero1 <<  "/" << " " <<  numero2 << " =" << somaTotal << std::endl;
        }
        
        break;
    default:
        std::cout << "Inválido" << std::endl;
        break;
   }



}