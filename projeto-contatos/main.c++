#include <iostream>
#include <string>
#include "contatos.h"

int main(){
    //Heap
    contato* Contato1 = new contato("Clevison", 3345154512, "Clevison");
    Contato1->exibir();


    delete Contato1;
    return 0;
}