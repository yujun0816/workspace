#include <stdio.h>
/**
 *  함수의 문법
 * 1.데이터 반환 타입 함수명 (매개변수1 ,매개변수2)
 * 실행문;
 * 
 * 2. return 함수 종료 의미
 * 함수종료: 함수를 호출했던곳으로 돌아감
 * return 반환값 호출했던곳으로 돌아가면서 반환값을 가져옴
 * return과 반환값 모두 생략 가능
 * 
 * 3. 매개변수 데이터반환값 생략 void 사용
 * 매개변수 데이터변환값을 사용하지 않겠다는 의미
 */

//3. 함수선언
//int sum(int x,int y);

//1. 함수정의
// 사용자 정의 함수 생성
int sum(int x,int y){
    int temp;
    temp=x+y;
    return  temp;
}

int main(){
    int a=10,b=5;
    int result;

    //2. 함수 호출
    //생성된 함수를 호출해서 사용
    result =sum(a,b);
    printf("%d",result);
}