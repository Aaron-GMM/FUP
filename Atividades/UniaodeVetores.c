#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[4];
    int vetor2[4];
    int vetorUI[4];
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        vetor1[i] = rand() % 10;
    }
    for (int j = 0; j < 4; j++)
    {
        vetor2[j] = rand() % 10;
    }

    for (int u = 0; u < 4; u++)
    {

        for (int v = 0; v < 4; v++)
        {
            if (vetor1[u] == vetor2[v])
            {
                vetorUI[u] = vetor1[u];
                printf("vetor de uniao %d\n", vetorUI[u]);
                c++;
            }
        }
    }
    if (c == 0)
    {
        printf("Nao a uniao");
    }
    for (int x = 0; x < 4; x++)
    {
        printf("vetor1 %d\n", vetor1[x]);
    }
    for (int z = 0; z < 4; z++)
    {
        printf("vetor2 %d\n", vetor2[z]);
    }

    return 0;
}