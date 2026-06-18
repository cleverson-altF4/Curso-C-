/*Sistema dee desconto com relatório*/

#include <iostream>

void linha(){
    std::cout << "\n" << "-------  SISTEMA DE DESCONTO COM RELATÓRIO --------" << "\n";
}

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

    float resultado_preco1 = calcular_preco(preco1);
    float resultado_preco2 = calcular_preco(preco2);
    float resultado_preco3 = calcular_preco(preco3);

    verificar_preco(resultado_preco1);
    verificar_preco(resultado_preco2);
    verificar_preco(resultado_preco3);


    
    linha();
    std::cout << "Preço 1: " << resultado_preco1 << "\n";
    std::cout << "Preço 2: " << resultado_preco2 << "\n";
    std::cout << "Preço 3: " << resultado_preco3 << "\n";

    std::cout<< "Quantidade de produto abaixo de R$50,00: " << abaixo_de_50 << "\n";


    return 0;
    
}