#include <stdio.h>
//짝수 합 홀수 합 더하기
int main(){
    int sum1=0,sum2=0;

    for(int i=0; i<=100; i++){
        if(i%2==0){
            sum1+=i;
        }
        else
            sum2+=i;
    }
    printf("짝수합 :%d 홀수합: %d",sum1,sum2);
}