#include <stdio.h>
#include <string.h>
/**
 * char:문자형 ex)'A'
 * String 문자열 ex) "ABC"
 * C언어는 문자열형이 존재하지 않는다 ->배열+char형
 * 
 * char 배열명[문자열 길이+1]=문자열;
 * ex) char abc[4]="ABC";
 * 문자열 길이+1은 문자열 끝에 \0(널 문자)가 자동으로 추가
 * 배열이란 기본자료형을 여러개 묶어서 사용하는것
 */
int main(){
    char arr_fruit[20]="strawberry";  //char배열 선언 및 문자열 초기화
    printf("딸기:%s\n",arr_fruit);
    //배열은 선언된 이후에 대입연산자로 값 입력 불가
    //strcpy() 사용하면 가능->문자열 복사
    strcpy(arr_fruit,"apple");
    printf("사과:%s",arr_fruit);

    return 0;
}