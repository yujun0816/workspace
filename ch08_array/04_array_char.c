#include <stdio.h>
/*
 * 문자를 저장하는 배열
 c언어는 문자열형이 존재하지 않음
 그래서 char배열을 사용해서 저장
 char배열은 무자열 길이보다 +1 더 크게 만들기
 배열은 값이 비면 0으로 초기화

 char 배열은 선언시 초기화하면 남은 배열 요소를 0으로 채우고
 자동으로 문자열 끝에 \0문자 저장
 ex) char name[4] ="ABC";
 //선언과 초기화를 따로 하는경우
    자동으로 널문자 저장 안됨 (직접 입력)
 char name[4];
 name[0]="A";
 name[1]="B";
 name[2]="C";
 name[3]="\0";  //반드시 직접 입력
 */
int main(){
    char fruit[6]="apple";
    char fruit[6]={'a','p','p','l','e'};
}