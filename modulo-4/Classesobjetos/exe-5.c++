#include <iostream>
#include <string>

class Televisao {
    private:
        std::string nome_TV;
        std::string fabricacao;
        int ano_fabricacao;
        double preco;


    public:
        Televisao(std::string nome, std::string fab, int year_fab, double valor){
            nome_TV = nome;
            fabricacao = fab;
            ano_fabricacao = year_fab;
            preco = valor;
        }


        //getters
        std::string getNome(){
            return nome_TV;
        }

        std::string getFab(){
            return fabricacao;
        }

        int getYearFabricacao(){
            return ano_fabricacao;
        }

        float getValorTV(){
            return preco;
        }

        //setters

        void setNome(std::string nome){
            nome_TV = nome;
        }


        void setFab(std::string fab){
            fabricacao = fab;
        }

        void setYearFabricacao(int year_fab){
            ano_fabricacao = year_fab;
        }

        void setValorTV(double valor){
            preco = valor;
        }


        void mostrarNaTela(){
            std::cout << "Nome da tv: " << nome_TV << "\n";
            std::cout << "Fabricante: " << fabricacao << "\n";
            std::cout << "Ano de fabricação: " << ano_fabricacao << "\n";
            std::cout << "Valor da Tv: " << preco << "\n"; 
        }

};


int main(){

    Televisao TV("Semp", "Japonesa", 2000, 1.641);
    TV.mostrarNaTela();


    return 0;
}