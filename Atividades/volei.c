    #include <stdio.h>
    int main()
    {
        int p, f, t;
        char s;
        scanf(" %c", &s);
        scanf("%d", &f);

        if (s == 'c')
        {
            t = 18;
        }
        else
        {
            t = 20;
        }

        p = ((f * t) - 80) / 10;
        if (p < 150)
        {
            printf("Fraco, nem passou");
        }
        else if (p >= 150 & p < 180)
        {
            printf("Perfeito");
        }
        else if (p >= 180 & p <= 210)
        {
            printf("Satisfeito");
        }
        else if (p > 210)
        {
            printf("Muito forte, bola fora");
        }
    }