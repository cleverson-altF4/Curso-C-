#include <iostream>


class forma{
    public:
        virtual void desenha(){ //uso do virutal 
            std::cout << "Desenhando uma forma\n";
        }
};

int main(){

    forma F;
    F.desenha();

    return 0;
}