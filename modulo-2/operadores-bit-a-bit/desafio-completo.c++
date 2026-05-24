/*Usando a lógica de &, ^, | , (1<<N), (1>>N), ~ */

#include <iostream>
using namespace std;


int main(){
    const uint8_t inicial =  0b10101010;
    uint8_t painel = inicial;
    const uint8_t lampada_1 = 0b00001000; //(1<<3)
    const uint8_t lampada_2 = 0b01010101; //(1<< 0) | (1 << 2) | (1 << 4) | (1 << 6)
    const uint8_t lampada_3 = 0b00101010; //(1<<1) | (1<<3) | (1<<5)
    const uint8_t lampada_4 = 0b10000000;
    const uint8_t lampada_5 = (1<<6);

    //And = &
   if (painel & lampada_1)
   {
        cout << "Lâmpada 3: Acesa" << endl; 
   } else {
        cout << "Lâmpada 3: Apagada" << endl;
   }
   //Or = |
   painel = inicial;
   painel |= lampada_2;
   cout << "Painel: todas acesas " << int(painel) << endl; 

   //Xor = ^
   painel = inicial;
   painel ^= lampada_3;
   cout << "Painel aṕos o toggle: " << (int)painel << endl;
   
   //And & e Not ~
   painel = inicial;
   painel  &= ~lampada_4;
   cout << "Lâmpada 7 apagada. painel: " << (int)painel << endl;

   // shift + or
   painel = inicial;
   painel |= lampada_5;
   cout << "Bit 6 acesso. Painel: " << (int)painel << endl;

   return 0;
}