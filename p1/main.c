#include <stdio.h>

int main(void)
{
    int i=0, j=0, count =0;
    scanf("%d", &i);
    do {
        scanf("%d", &j);
        if (i>j)
            printf("%d<?\n", j);
        else if (i<j)
            printf("%d>?\n", j);
        else
            printf("%d==?\n", j);
        count ++;
    } while(i!=j);
    
    printf("%d",count);

    return 0;
}
