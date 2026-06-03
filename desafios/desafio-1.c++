/* Inicialização da frota */

#include <iostream>
using namespace std;

int main()
{
    int drones = 0b10110101; // 8 drones 1 = ativo / 0 = inativo

    for (int i = 0; i < 8; i++)
    {
        int bit = (1 << i) & drones;

        if (bit)
        {
            cout << "Drone " << i << " : Ativo" << endl;
        }
        else
        {
            cout << "Drone " << i << " : Inativo" << endl;
        }
    }

    cout << "\n--- Nivel de combustível ---\n";

    int nivelCombustivel[8] = {85, 0, 42, 0, 91, 0, 17, 0};
    int somaTotal = 0;
    int contador = 0;
    int atual = 0;
    int totalConsumido = 0;

    for (int i = 0; i < 8; i++)
    {
        atual = nivelCombustivel[i];

        if (atual == 0)
        {
            continue;
        }

        if (i & 1)
        {
            cout << "Ímpar " << i << endl;
        }
        else
        {
            cout << "Par " << i << endl;
        }

        contador++;
        somaTotal += atual;

        int gasto = 100 - atual;
        totalConsumido += gasto;

        cout << "O drone tem " << atual
             << " e gastou " << gasto << endl;
    }

    if (contador > 0)
    {
        float media = (float)somaTotal / contador;

        cout << "Drones ativos: " << contador << endl;
        cout << "Total consumido: " << totalConsumido << endl;
        cout << "Média: " << media << endl;
    }
    else
    {
        cout << "Não tem drones" << endl;
    }

    cout << "\n---- Missão ----\n";

    int setor = 1;

    do
    {
        int sensor = (setor * 3 + 7) % 10 + 1;

        if (sensor > 7 && setor % 2 == 1)
        {
            cout << "AMEAÇA CRÍTICA" << endl;
            break;
        }
        else if (sensor > 7 && setor % 2 == 0)
        {
            cout << "Setor " << setor << " Aviso!" << endl;
            setor++;
            continue;
        }
        else
        {
            cout << "Setor " << setor << " limpo" << endl;
            setor++;
        }

    } while (setor <= 20);

    cout << "\n--- Sincronizar duas frotas ---\n";

    int frotaA = 0b11001010;
    int frotaB = 0b01110011;
    int somatoria = 0;

    for (int i = 0; i < 8; i++)
    {
        bool ativoA = frotaA & (1 << i);
        bool ativoB = frotaB & (1 << i);

        if (!ativoA && !ativoB)
        {
            cout << i << " continue" << endl;
            continue;
        }
        else if (ativoA && ativoB)
        {
            cout << i << " Redundância" << endl;
            somatoria++;
        }
        else if (ativoA)
        {
            cout << i << " Único A - Manter" << endl;
        }
        else if (ativoB)
        {
            cout << i << " Único B - Transferir" << endl;
        }
    }

    int frotaUnificada = frotaA | frotaB;
    int redundancia = frotaA ^ frotaB;

    cout << "Frota unificada: " << frotaUnificada << endl;
    cout << "Redundância: " << redundancia << endl;

    if (!(somatoria <= 3))
    {
        cout << "Frota superlotada" << endl;
    }

    cout << "\n== Resgate sob falha ==\n";

    int status[10] =
    {
        0b11001010,
        0b00110011,
        0b11111111,
        0b00000000,
        0b10101010,
        0b01010101,
        0b11110000,
        0b00001111,
        0b10000001,
        0b01111110
    };

    int energia[10] =
    {
        90, 15, 100, 0, 55,
        30, 80, 45, 5, 70
    };

    int prioridade[10] =
    {
        1, 0, 1, 0, 1,
        0, 0, 1, 1, 0
    };

    bool parar = false;
    int contadorCriticos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (energia[i] == 0)
        {
            continue;
        }

        int bitsAtivos = 0;

        for (int j = 0; j < 8; j++)
        {
            int bits = (1 << j) & status[i];

            if (bits != 0)
            {
                bitsAtivos++;
            }
        }

        if (bitsAtivos > 6 && prioridade[i] == 1)
        {
            cout << "Ponto crítico" << endl;
            contadorCriticos++;
        }
        else
        {


        do
        {
            if (status[i] & 0b10000000)
            {
                cout << "Ponto protegido" << endl;
                break;
            }
            else
            {
                energia[i] -= 10;
            }

            if (contadorCriticos > 2)
            {
                cout << "Sobrecarga" << endl;
                parar = true;
                break;
            }

            if (energia[i] < 20 && !prioridade[i])
            {
                cout << "Ponto abandonado" << endl;
            }

            if (parar)
            {
                break;
            }

        } while (energia[i] > 0);
    }
    }

    return 0;
}


//Desgraçado não quis me mandar o código então fica assim mesmo
