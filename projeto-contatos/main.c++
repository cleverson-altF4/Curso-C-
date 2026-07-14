#include <iostream>
#include <string>
#include "contatos.h"

int main(){
    //Heap
    contato* Contato1 = new contato("Clevison", 3345154512, "gmail.com");
    Contato1->exibir();

    contato* contato2 = new contato("Cleiton", 339992414, "hotmail.com");
    contato2->exibir();


    delete Contato1;
    delete contato2;

    return 0;
}