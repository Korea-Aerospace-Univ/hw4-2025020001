#include <stdio.h>

int main(void)
{
    int i=0, j=0;
    scanf("%d", &i);
    do {
        scanf("%d", &j);
        if (i>j)
            printf("%d<?\n", j);
        if (i<j);
            printf("%d>?\n", j);
    } while(i=j);
    if (i=j)
        printf("%d==?", j);

    return 0;
}
