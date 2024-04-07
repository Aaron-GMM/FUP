#include <stdio.h>

int main()
{
    int c, m;
    int total_passageiros = 0;

    int lotado = 0;

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &m);
        if (m < 0)
        {
            total_passageiros -=m;
        }
        else if (m >= 0)
        {
            total_passageiros += m;
        }

        if (total_passageiros>c && lotado == 2)
        {
            printf("hora de partir\n");
            break;
        }
        else if (total_passageiros == 0)
        {
            printf("vazio\n");
            lotado = 0;
        }
        else if (total_passageiros < c)
        {
            printf("ainda cabe\n");
            lotado = 0;
        }
        else if (total_passageiros >= c)
        {
            printf("lotado\n");
            lotado++;
        }
    }

    return 0;
}
