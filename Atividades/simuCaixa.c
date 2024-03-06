#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int conta[10] = {0}, saldo[10] = {0};
    int op = 0;
    int saque = 0;
    // #define e true;
    bool e = true;
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o numero da conta");
        scanf("%d", &conta[i]);
        e = true;
        while (e == true)
        {
            if (conta != NULL)
            {
                printf("\nConta %d \n Escolha a operacao:\n\t1-Saldo\n\t2-Depositar\n\t3-Saque\n\t4-Digite pra sair", conta[i]);
                scanf("%d", &op);
                switch (op)
                {

                case 1:
                    printf("\nStatus do  saldo da conta  N:%d Saldo: %d", conta[i], saldo[i]);
                    break;

                case 2:
                    printf("\nConta N:%d\nDigite o valor do deposito:", conta[i]);
                    scanf("%d", &saldo[i]);
                    if (saldo[i] != NULL)
                    {
                        printf("\nDeposito efetuado com sucesso!");
                        printf("\nStatus do  saldo da conta  N:%d Saldo: %d", conta[i], saldo[i]);
                    }
                    else
                    {
                        printf("\n Erro no deposito");
                    }
                    break;

                case 3:
                    printf("\nConta N:%d\nDigite o valor que deseja sacar", conta[i]);
                    scanf("%d", &saque);
                    if (saldo[i] >= saque)
                    {
                        saldo[i] -= saque;
                        printf("\n Saque efetuado com sucesso!");
                        printf("\nStatus do  saldo da conta  N:%d Saldo:%d", conta[i], saldo[i]);
                    }
                    else
                    {
                        printf("\nSaldo Indisponivel\n");
                    }
                    break;

                default:
                    e = false;
                    break;
                }
            }
        }
    }
    for (int x = 0; x < 10; x++)
    {
        printf("\nConta: %d \n", conta[x]);
        printf("\nSaldo %d\n", saldo[x]);
    }

    return 0;
}