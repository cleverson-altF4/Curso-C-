/*Sistema dee desconto com relatório*/

#include <iostream>

int main(){
    float preco1 = 80.0f;
    float preco2 = 45.0f;
    float preco3 = 120.0f;
    float desconto = 10.0f;
    
    int abaixo_de_50 = 0;


    auto calcular_preco = [desconto](float preco){
        return preco - desconto;
    };


    auto verificar_preco = [&abaixo_de_50](float preco){
        if (preco < 50)
        {
            abaixo_de_50++;
        }
        
    };

    
}