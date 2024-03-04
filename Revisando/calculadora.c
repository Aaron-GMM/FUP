#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int q = 0, c = 0;
    float n1;
    float result = 0;
    bool e = true;
    while (e == true)
    {
        printf("\nDigite qual operacao voce deseja: \n \t1-Soma\t2-Sub\t3-Div\t4-multi");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            result = 0;

            printf("\nDigite quantos numero voce deseja soma:");
            scanf("%d", &q);
            for (int i = 0; i < q; i++)
            {
                printf("Digite o %d  numero", i);
                scanf("%f", &n1);
                result += n1;
            }
            printf("%2.f", result);
            break;
        case 2:
            result = 0;
            printf("\nDigite quantos numeros voce deseja subtrair:");
            scanf("%d", &q);

            printf("\nDigite o 0  numero");
            scanf("%f", &result);

            for (int i = 1; i < q; i++)
            {
                printf("\nDigite o %d  numero", i);
                scanf("%f", &n1);
                result -= n1;
            }
            printf("%.2f\n", result);
            break;
        case 3:
            result = 0;
            printf("\nDigite quantos numero voce deseja Dividir :");
            scanf("%d", &q);
            printf("\nDigite o 0  numero");
            scanf("%f", &result);

            for (int i = 1; i < q; i++)
            {
                printf("\nDigite o %d  numero", i);
                scanf("%f", &n1);
                result /= n1;
            }
            printf("\n%.2f", result);
            break;
        case 4:
            result = 0;

            printf("\nDigite quantos numero voce deseja Multiplicar:");
            scanf("%d", &q);
            printf("\nDigite o 0  numero");
            scanf("%f", &result);
            for (int i = 1; i < q; i++)
            {
                printf("\nDigite o %d  numero", i);
                scanf("%f", &n1);
                result *= n1;
            }
            printf("\n%.2f", result);
            break;
        default:
            e = false;
            break;
        }
    }
}