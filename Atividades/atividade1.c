#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Q1 media emoporderada
    //entrada 7,3,8
    float n1, n2, n3;
    float p1 =2, p2=3, p3=1;
    float media;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("%2.f", media); //>>>>5,16

    // Q2 imc

    float peso, altura;
    float result;
    scanf("%f", &peso);
    scanf("%f", &altura);
    result = peso/(altura*altura);
    printf("%2.f", result);

    // Q3 saco de ração
    float peso_saco;
    float qtd_de_racao;
    int gato = 2;
    float duracao;
    scanf("%f", &peso_saco);
    scanf("%f", &qtd_de_racao);
    peso_saco = peso_saco*1000;
    duracao =peso_saco - (qtd_de_racao*2*5);
        
    printf("%2.f", duracao);


    // Q4
    float precoDeFabrica, pLucro, pImposto;
    float precoFinal;
    scanf("%f",&precoDeFabrica);
    scanf("%f",&pLucro);
    scanf("%f",&pImposto);
 
    pLucro = precoDeFabrica * (pLucro/100);
    pImposto = precoDeFabrica * (pImposto/100);

    printf("%0.2f\n\n%0.2f", pLucro, pImposto);

    precoFinal = pLucro+pImposto+precoDeFabrica;

    printf("\n%0.2f", precoFinal);
    return 0;
}