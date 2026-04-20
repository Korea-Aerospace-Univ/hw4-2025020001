#include <stdio.h>

int main()
{
    int i=0, count1=0, max1=0, count2=0, max2=0;
    char j='\n';
    scanf("%d", &i); 
    getchar();
    for(int k=0; k<i; k+=1){ 
        scanf("%c",&j); 
        if(j>='a' && j<='z') {
            count1 ++;
            count2=0; 
            if (count1>max1) 
                max1 = count1;}
            
        else if(j>='0'&& j<='9'){
            count2 ++;
            count1=0; 
            if (count2 > max2) 
                max2 = count2;} 
        else{ 
            count1=0;
            count2=0;
        }    
    }
    
    printf("%d\n", max1); 
    printf("%d", max2); 
    return 0;
