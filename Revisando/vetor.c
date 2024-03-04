#include <stdio.h>
#include <stdlib.h>

int main()
{
//preenchendo e imprindo vetores
    int a[3];

    for (int j = 0; j < 3; j++)
    {
        printf("\t");
        scanf("%d", &a[j]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}