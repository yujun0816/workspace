#include <stdio.h>
/**
 * 피보나치 수열 코드 개발
 * 피보나치 수열이란 첫째 둘째 항이 1이며 그뒤의 항은 모두 바로 앞의 두항의 합인 수열
 * 1 1 2 3 5 8 13
 */
int main(){
    int a=0,b=1,c;
    printf("1 ");
    for (int i = 1; i <= 6; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    //교수님 방법
    // int a=1,b=1,fib;
    // printf("%d %d ",a,b);
    // while(1){
    //     fib=a+b;
    //     printf("%d ",fib);
    //     a=b;
    //     b=fib;
    //     if(fib>13)
    //         break;
    // }
}