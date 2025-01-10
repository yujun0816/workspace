#include <stdio.h>
/**
 * return 반환값
 * 기본적으로 함수 종료(호출한 곳으로 돌아가기)
 * 반환값 -> 데이터 반환타입도 함수 정의
 * 반환값이 없는 경우 데이터 반환타입을 void정의
 * return or 반환값 모두 생략 가능
 */

void void_fnc(){
    printf("Hello");
}

int int_fnc(){
    return 99;
}

int main(){
    void_fnc();
    int_fnc();
}