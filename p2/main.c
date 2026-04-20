#include <stdio.h>

int main()
{
    int i=0, count1=0, max1=0, count2=0, max2=0; // 변수 선언 및 초기화
    char j='\n'; // 변수 선언 및 초기화
    scanf("%d", &i); // 입력될 숫자의 개수 입력 받기
    getchar(); // scanf에서 입력 후 남아 있는 엔터키를 없애줌 -> 다음 문자 입력이 방해 받지 않음
    
    for(int k=0; k<i; k+=1){ 
        scanf("%c",&j); // 문자 입력 받기
        if(j>='a' && j<='z') { // 문자가 소문자일 경우
            count1 ++; // count1이 증가 -> 개수 세기
            count2=0; // count2의 경우 숫자를 세는 변수이므로 0으로 초기화
            if (count1>max1) // count1이 max1보다 클 경우 max1에 count1 값 대입 
                max1 = count1;} //-> 소문자의 최대 개수 입력
            
        else if(j>='0'&& j<='9'){ // 문자가 숫자 일 경우
            count2 ++; //count2가 증가 -> 개수 세기
            count1=0; // count1은 소문자의 수를 세는 변수이므로 0으로 초기화
            if (count2 > max2) //count2가 max2보다 클 경우 max2에 count2값 대입
                max2 = count2;} //-> 연속된 숫자의 최대 개수 입력
        else{ // 문자가 소문자, 숫자가 아닌 문자일 때 count1,count2 모두 초기화
            count1=0;
            count2=0;
        }    
    }
    
    printf("%d\n", max1); //max1에 저장된 연속된 소문자의 최대 개수 출력
    printf("%d", max2); //max2에 저장된 연속된 소문자의 최대 개수 출력
    return 0;
