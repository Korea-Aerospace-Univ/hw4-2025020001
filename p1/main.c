#include <stdio.h>

int main(void)
{
    int i=0, j=0;
    scanf("%d", &i);
    do {
        scanf("%d", &j);
        if (i>j)
            printf("%d<?\n", j);
        else if (i<j)
            printf("%d>?\n", j);
        else
            printf("%d==?", j);

    } while(i!=j);
    

    return 0;
}
