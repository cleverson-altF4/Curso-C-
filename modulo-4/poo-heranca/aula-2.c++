#include <iostream>
#include <string>

class clevison {
    public:
        std::string nome;
        std::string comida;
        int idade;
        float altura;
        std::string filmes;
        std::string hoobies;

        void mostrar(){
            std::cout << "Nome: " << nome << "\n";
            std::cout << "Tipo de comida: " << comida << "\n";
            std::cout << "Idade: " << idade << "\n";
            std::cout << "Altura: " << altura << "\n";
            std::cout << "Tipo de filme: " << filmes << "\n";
            std::cout << "Hobbies: " << hoobies << "\n";
        }

};


class brother : public clevison { //ele herda a herança da classe clevison
    public:
        std::string nome2;

        void mostrar2(){
            std::cout << "Nome: " << nome2 << "\n";
        }
};


int main(){

    brother irmao;
    
    irmao.nome = "Clevison";
    irmao.comida = "Lanche";
    irmao.altura = 1.71;
    irmao.filmes = "Gladiator";
    irmao.hoobies = "Programação";
    irmao.idade = 31;
    irmao.mostrar();
    irmao.nome2 = "Cleiton";
    irmao.mostrar2();
    irmao.nome2 = "Cuca";
    irmao.mostrar2();


    return 0;
}