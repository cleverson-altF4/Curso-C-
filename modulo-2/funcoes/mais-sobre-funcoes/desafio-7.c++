/*Funções passagem por referência &

Lembra do pass by value — a fotocópia? Agora vamos aprender o oposto.

A analogia

Passagem por valor — você entrega uma fotocópia do documento. A função rabisca na cópia. O original não muda.
Passagem por referência — você entrega o documento original. A função rabisca no original. O original muda.

*/

#include <iostream>

void zerar(int& valor){
    valor = 0;
    
}

void trocar(int& x, int& y){
    int temporaria = x;
    x = y;
    y = temporaria;
    
}

void incrementar(int& referencia, int incremento = 0){
   referencia += incremento;
   
}

void dobrar_todos(int& A, int& B, int& C){
    A = A * 2;
    B = B * 2;
    C = C * 2;
}

void normalizar(float& number){
    if (number < 0)
    {
        number *= -1;
    }
    
}



int main(){
    int res = 10;
    std::cout << res << "\n";
    
    zerar(res);
    std::cout << res << "\n";

    
    
    
}