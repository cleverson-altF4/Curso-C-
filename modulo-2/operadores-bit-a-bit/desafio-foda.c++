/*Casa inteligente com as luzes apagadas*/

#include <iostream>
using namespace std;


int main(){
    const uint8_t sala = (1<<7); 
    const uint8_t cozinhaA = (1<< 6); 
    const uint8_t cozinhaB = (1<<5);
    const uint8_t quarto1 = (1<<4);
    const uint8_t quarto2_A = (1<<3);
    const uint8_t quarto2_B = (1<<2);
    const uint8_t banheiro = (1<<1);
    const uint8_t garagem = (1<<0);

    uint8_t luzes = 0;
    const uint8_t inicial = 0;

    luzes |= sala | cozinhaA | garagem;

    cout << "Chegando em casa. Luzes: " << (int(luzes)) << endl;

    if (luzes & banheiro)
    {
        cout << "Banheiro: Aceso" << endl;

    } else {
        
        cout << "Banheiro: Apagado" << endl;
    }

    if (luzes |= banheiro)
    {
        cout << "Banheiro: Aceso" << endl;
    } else{
        cout << "Banheiro: Apagado" << endl;
    }
    

    return 0;
}