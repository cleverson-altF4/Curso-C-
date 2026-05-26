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
    luzes = inicial;
    luzes |= sala | cozinhaA | garagem;
    cout << "Chegando em casa. Luzes: " << (int(luzes)) << endl;

    if (luzes & banheiro)
    {
        cout << "Banheiro: Aceso" << endl;

    } else {
        
        cout << "Banheiro: Apagado" << endl;
    }

    luzes |= banheiro;
    if (luzes & banheiro)
    {
        cout << "Banheiro: Aceso" << endl;
    } else {
        cout << "Banheiro: Apagado" << endl;
    }
    
    
    luzes &= ~garagem;
    cout << "Garagem apagada. luzes: " << (int)luzes << endl;

    
    luzes ^= quarto1;
    cout << "Toque 1 - Quarto 1: " << (int)luzes << endl;
    luzes ^= quarto1;
    cout << "Toque 2 - Quarto 1: " << (int)luzes << endl;
    
    luzes = quarto1 | banheiro;
    uint8_t modo_DORMIR = quarto1 | banheiro;

    if ((luzes & modo_DORMIR)== modo_DORMIR && (luzes & ~modo_DORMIR)==0)
    {
        cout << "Casa pronta para dormir" << endl;
    } else {
        cout << "Ainda há luzes acesas" << endl;
    }
    
    const uint8_t todasAsLuzes = sala | cozinhaA | cozinhaB | quarto1 | quarto2_A | quarto2_B | banheiro | garagem; 
    
    luzes &= ~todasAsLuzes;
    cout << "Boa noite. luzes: " << (int)luzes << endl;

    if (luzes == 0)
    {
        cout << "Casa no escuro" << endl;
    }
    
    return 0;
}