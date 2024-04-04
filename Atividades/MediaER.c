#include<stdio.h>
int main(){
    int n = 0;
    float notas;
    float media;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&notas);
        media += notas;
    }
     media /= n;
    printf("%0.2f", media);
    
}

#include <stdio.h>

