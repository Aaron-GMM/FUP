#include <stdio.h>
#include <math.h>

int main() {
    int capacidade, ta;
    scanf("%d", &capacidade);
    scanf("%d", &ta);

   
    int viagens = ceil(ta / (capacidade - 1));

    printf("%d", viagens);

    return 0;
}
