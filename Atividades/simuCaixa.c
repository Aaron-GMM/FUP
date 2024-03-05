#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int conta[10] = {0}, saldo[10] = {0};
    int op = 0;
    bool e = true;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da conta");
        scanf("%d", &conta[i]);
        while (e == true)
        {
            if (conta != NULL)
            {
                printf("Conta %d \n Escolha a operacao:\n\t1-Saldo\n\t2-Depositar\n\t3-Saquen\n\t4-digite pra sair", conta[i]);
                scanf("%d", &op);
                switch (op)
                {
                case 1:

                    printf("Conta N:%d Saldo eh:%d", conta[i], saldo);
                    break;
                case 2:
                    break;

                case 3:

                default:
                    break;
                }
            }
        }
    }

    return 0;
}