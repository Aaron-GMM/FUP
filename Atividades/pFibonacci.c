#include <stdio.h>
int main()
{
    long int proximo,primeiro,segundo;
    int n=0;
    scanf("%ld",&n);
    if ( n>=0 && n<=50)
    {
            for (int i = 2; i <= n; i++) {
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
            }
        
        printf("%ld",proximo);
    }
    

    return 0;
}