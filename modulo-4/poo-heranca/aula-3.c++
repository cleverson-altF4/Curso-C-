#include <iostream>
#include <string>


class pessoa { //O uso da classe
    private: //-------------------- privado 
        std::string nome;
        int idade;
    
    public: //----------------- publico

        pessoa(std::string name, int Idade){ // O uso do construtor para pegar a classe com nome = name / idade = Idade
            nome = name;
            idade = Idade;
            
        }

        
        std::string getNome(){ // ---------  O uso do getters 
            return nome;
        }

        int getIdade(){ // ----------
            return idade;
        }


        void setNome(std::string name){ // --------  O uso do setters
            nome = name;
        }

        void setIdade(int Idade){ // -----------
            idade = Idade;

        }

        void exibir(){ //  metodo que exibe o nome e idade
            std::cout << "Nome: " << nome << "\n";
            std::cout << "Idade:" << idade << "\n";
        }


};



class estudante : public pessoa{ // pega a herança da pessoa em estudante
    public:

        std::string curso;

        estudante(std::string name, int Idade, std::string Curso) : pessoa(name, Idade){ //Aqui pega o construtor estudante com os atributos de name, Idade, curso
            curso = Curso;
        }


        void exibirCompleto(){
            exibir();

            std::cout << "Curso: " << curso << "\n";
            
        }

};

    
int main(){

    estudante aluno1("Clevison", 31, "Programação");
    estudante aluno2("cleiton", 25, "Funileiro");
    estudante aluno3("Luana", 28, "Caixa");
    std::cout << "\n -------- Exibe completo ------\n";
    aluno1.exibirCompleto();
    aluno2.exibirCompleto();
    aluno3.exibirCompleto();

    //Caso queira mostrar apenas o nome e idade;
    std::cout << "\n ------ Exibe normal -------\n";
    aluno1.exibir();
   

    return 0;

}