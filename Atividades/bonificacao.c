#include<stdio.h>
int main(){

    float salario_i;
    float salario_f;
    float aumento;

    scanf("%f",&salario_i);
    if (salario_i<=1000.00)
    {
        aumento = 0.20;
    }else if (salario_i<=1500.00)
    {
        aumento = 0.15;
    }else if (salario_i<=2000.00){
        aumento = 0.10;
    }else{
        aumento = 0.05;
    }
    salario_f =salario_i+(salario_i*aumento);
    printf("%.2f",salario_f);
    
}