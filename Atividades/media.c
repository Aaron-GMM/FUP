#include <stdio.h>
int main(){
    float n1, n2, n3, t4;
    float media;
    scanf("%f%f%f%f",&n1,&n2,&n3,&t4);
   float menorValor = n1;
    if (n2 < menorValor) {
        menorValor = n2;
    }
    if (n3 < menorValor) {
        menorValor = n3;
    }
    if (t4 < menorValor) {
        menorValor = t4;
    }
    media = ((n1+n2+n3+t4)-menorValor)/3;
    if (media>=7)
    {
        printf("Aprovado com %.2f",media);
    }else{
        printf("Final com %.2f",media);
    }
    
}