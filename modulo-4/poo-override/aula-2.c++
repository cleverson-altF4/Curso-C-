#include <iostream>
#include <string>


class forma{
    public:
        void desenhar(){
            std::cout << "Desenhando uma forma genérica\n";
        }

        double area(){
            return 0;
        }

};

class circulo : public forma {
    private:
        //membro
        double raio;
    public:
        //construtor
        circulo(double r){
            raio = r;
        }

        //subscreve 
        void desenhar(){
            std::cout << "Desenhando um circulo\n";
        }

        double area(){
            return 3.14159 * raio * raio;

        }
};


class retangulo : public forma{

    private:
        //membro
        double largura, altura;
    public:
        //construtor
        retangulo(double larg, double altu){
            largura = larg;
            altura = altu;
        }

        void desenhar(){
            std::cout << "Desenhando um retângulo\n";
        }

        double area(){
            return largura * altura;
        }

};


int main(){

    circulo circle(5);
    circle.area();
    circle.desenhar();
    std::cout << "Àrea do circulo: "<< circle.area() << "\n";
    retangulo retangul(4.0, 3.0);
    retangul.area();
    retangul.desenhar();
    std::cout << "Àrea do retângulo: "<< retangul.area() << "\n";
    return 0;
}