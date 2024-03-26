#include <stdio.h>

int main() {
    int r1, r2, r3;
    char menor, meio, maior;

    scanf("%d%d%d", &r1, &r2, &r3);

    if (r1 < r2 && r1 < r3) {
        menor = 'P';
        if (r2 < r3) {
            meio = 'M';
            maior = 'G';
        } else {
            meio = 'G';
            maior = 'M';
        }
    } else if (r2 < r1 && r2 < r3) {
        menor = 'P';
        if (r1 < r3) {
            meio = 'M';
            maior = 'G';
        } else {
            meio = 'G';
            maior = 'M';
        }
    } else {
        menor = 'P';
        meio = 'M';
        maior = 'G';
    }

    printf("%c %c %c", menor, meio, maior);

    return 0;
}
