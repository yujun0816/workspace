#include <stdio.h>
/*
 * 정수형 자료형
 * char,short,int ,long, long long
 * 우측으로 갈수록 더 큰 값을 표현가능
 * char 문자형-> 정수형으로 변환환
 * 동일한 ,type인데 다양한 범위의 자료형을 사용하는 이유는 메모리의 낭비를 막고 효율적으로 관리하기 위해서
 * 현재는 int를 가장 많이 사용
 * sizeof() 자료형 크기 확인
 */
int main(){
    char ch1='A';
    char ch2=65;
    printf("문자의 %c의 아스키 코드값: %d\n",ch1,ch1);
    printf("아스키 코드값이 %d인문자: %c\n",ch2,ch2);
    printf("----------------------------------------\n");

    short sh=32767;  //short의 최댓값
    int in=2147483647;  //int의 최댓값
    long ln =2147483647;  //long의 최댓값
    long long lln=123451234512345;  //그냥 큰 값

    printf("short형 변수 출력:%d\n",sh);  // alt + shift+ 방향키 아래 =복붙붙
    printf("int형 변수 출력:%d\n",in);
    printf("long형 변수 출력:%ld\n",ln);
    printf("long long형 변수 출력:%lld\n",lln);

    printf("int형의 크기: %d byte\n",sizeof(int));
    printf("long형의 크기: %ld byte\n",sizeof(long));
    printf("long long형의 크기: %lld byte\n",sizeof(long long));
}