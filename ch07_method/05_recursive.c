#include<stdio.h>
/**
 * 재귀함수 : 자기자신을 호출하는 함수
 */

// 무한 재귀함수
void fruit(){
    printf("Apple");
    fruit();  //재귀함수
}

int main(){
    fruit();
}