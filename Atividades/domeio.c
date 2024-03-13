#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    int nmeio;

    if (
        (valor1 > valor2 && valor1 < valor3) ||
        (valor1 < valor2 && valor1 > valor3))
    {
        nmeio = valor1;
    }
    else if (
        (valor2 > valor1 && valor2 < valor3) ||
        (valor2 < valor1 && valor2 > valor3))
    {
        nmeio = valor2;
    }
    else if (
        (valor3 > valor2 && valor2 < valor1) ||
        (valor3 < valor2 && valor3 > valor1))
    {
        nmeio = valor3;
    }

    printf("%d\n", nmeio);
}