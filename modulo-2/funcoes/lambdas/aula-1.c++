#include <iostream>

int main(){
    auto saudacao = [](){
        std::cout << "Estou aprendendo lambdas" << "\n";
    };

    auto saudacao_nome = [](std::string nome){
        std::cout<< "Olá " << nome << "\n";
    };
    
    saudacao_nome("Clevison");
    saudacao();
    return 0;
}
