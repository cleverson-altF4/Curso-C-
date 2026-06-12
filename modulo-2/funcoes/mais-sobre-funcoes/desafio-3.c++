#include <iostream>
#include <string>

/*Void sem parametros*/

void saudacao(){
    std::cout <<"Olá, seja bem-vindo!";
    
}

void linha(){
    std::cout << "\n--------------------" << "\n";
}

void apresentar(std::string nome){
    std::cout << "Meu nome é " << nome << "\n";
}

void par_ou_impar(int num){
    if (num % 2 == 0)
    {
        std::cout << "Número " << num << " é par" << "\n";
    } else {
        std::cout << "Número " << num << " é ìmpar" << "\n";
    }
    
}

void contagem(int n) {
    for (int i = 1; i <= n; i++)
    {
        std::cout << "Contagem " << i << "\n"; 
    }
    
}



int main(){
    linha();
    saudacao();
    linha();

    apresentar("clevison");
    apresentar("Claudia");
    apresentar("Luana");


    par_ou_impar(5);

    contagem(10);
}