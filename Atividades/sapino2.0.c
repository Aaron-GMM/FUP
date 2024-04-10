#include <stdio.h>

int main() {
    int p, s, e;
    scanf("%d", &p);
    scanf("%d", &s);
    scanf("%d", &e);

    int posicao = 0;
    while (posicao >= 0 && posicao < p) {

        if (posicao + s >= p) {
            printf("%d saiu\n", posicao);
            break;
        }
        else {
            printf("%d %d\n", posicao, posicao + s);
            posicao += s;
           
            if (posicao + s < p) {
               s -= 10;  
               posicao -= e;
            }
        }
    }
    if (posicao < 0) {
        printf("%d morreu\n", posicao);
    }

    return 0;
}
