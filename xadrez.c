#include <stdio.h>

void bispoRecursivo(int n)
{
    if (n > 0)
    {
        printf("Cima, Direita\n");
        bispoRecursivo(n - 1);
    }
}

void bispoLoopAninhado(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Cima, \n");
        for (int j = 0; j < n; j++)
        {
            printf("Direita.\n");
            break;
        }
    }
}


void torre(int n)
{
    if (n > 0) {
        printf("Direita\n");
        torre(n - 1);
    }
}

void rainha(int n)
{
    if (n > 0)
    {
        printf("Esquerda\n");
        rainha(n - 1);
    }
}

void cavalo()
// Simplifiquei as variáveis
{
    int x = 1, y = 2;
    for (x; x > 0; x--)
    {
        for (y; y > 0; y--)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        x--;
    }
}

int main() {

    // Quantidade de casas para cada peça
    int casasTorre = 5, casasBispo = 5, casasRainha = 8;

    // BISPO 
    printf("Bispo - cinco casas para a diagonal direita para frente...\n");
    bispoRecursivo(casasBispo);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    bispoLoopAninhado(casasBispo);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    // TORRE 
    printf("Torre - cinco casas para a direita...\n");
    torre(casasTorre);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // RAINHA
    printf("Rainha - oito casas para a esquerda...\n");
    rainha(casasRainha);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // CAVALO
    printf("Cavalo - Duas casa pra cima e uma para direita.\n");
    cavalo();
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    return 0;
}
