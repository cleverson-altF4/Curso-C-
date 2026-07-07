#include <iostream>
#include "produto.h"
#include <string>


int main(){
    //o uso do heap é usando new delete


    std::cout << "\n--------  Produto 1 ----------\n";
    produto* produto1 = new produto("Arroz", 4.51, 1);
    produto1->exibir();

    produto1->setNome("Arroz Integral");
    produto1->setPreco(5.99);
    produto1->setQuantidade(2);
    


    std::cout << "\n--------  Produto 2 ----------\n";
    produto* produto2 = new produto("Feijão", 7.99, 1);
    produto2->setPreco(8.99);
    produto2->exibir();


    std::cout << "\n--------  Produto 3 ----------\n";
    produto* produto3 = new produto("Macarrão", 3.29, 1);
    produto3->exibir();


    std::cout << "\n--------  Mudança do valores do produto 1 ----------\n";
    produto1->exibir();


    std::cout << "\n--------  Mudança do valores do produto 2 ----------\n";
    produto2->exibir();

    std::cout << "\nIniciando delete...\n";
    delete produto1;
    delete produto2;
    delete produto3;
    std::cout << "Deletes concluídos!\n";


    return 0;

}
