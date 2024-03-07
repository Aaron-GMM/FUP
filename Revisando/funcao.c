#include <stdio.h>
#include <stdlib.h>
int coleta(){
    int n1;
    printf("Digite o numero \n");
    scanf("%d",&n1);
    return n1;
}
int soma(n1, n2)
{
    int result = n1 + n2;
    return result;
}

int main()
{
    int n1 = coleta();
    int n2 = coleta();
    int result = soma(n1,n2);
    printf("\n%d",result);
    return 0;
}