#include <stdio.h>
/**
 * 포인터 
 * 변수의 메모리 주소를 저장하는 변수(일반변수는 실제 값을 저장)
 * 포인터도 변수 사용하기전 선언 필수
 * 변수 앞에 * 붙임(아스테이크)
 * 포인터 변수 선언시에는 포인터 변수 의미
 * ex) int *p;
 * 초기화시에는 포인터변수의 실제 주소에 값을 저장 의미
 * *p=100;(*p -> 포인터 변수의 실제 주소에 값 100 저장)
 * 
 * 포인터 사용시 주의사항
 * 1. 꼭 초기화하고 사용
 *  int *p;
 *  int num;
 *  p=num;  //포인터 변수 초기화(num변수의 시작주소를 포인터 변수에 저장)
 * *p=100;  //포인터 변수p에 저장된 주소에 100값을 대입
 * 
 * 2. 포인터가 아무것도 가리키지 않는 경우 NULL(0)설정
 * 주소 0을 엑세스하면 시스템에서 자동적으로 오류 감지
 * 포인터 사용하기전 NULL체크(유효성 체크) 추가하면 더 안전한 코드 개발 가능
 * 
 * 객체지향언어 ->객체(참조변수)->주소(메모리)
 *  name ="ccw"; //String(문자열형) ->객제자료형
 * 
 * 3. 포인터 자료형과 변수의 자료형은 일치해야함
 *  자료형이 다르면 값의 손실이 생길수 있음
 */
int main(){
    int a;
    int *pa;

    //&a는 a변수의 시작주소
    pa=&a;

    //*pa(간접참조연산자):변수 pa의 저장딘 주소에 값 99저장
    //  포인터가 가리키는 위치의 값 추출
    //  ()다음으로 높은 우선순위를 가짐->다른 연산자보다 먼저
    *pa=99;

    //*pa ==a 와 동일
    printf("포인터 a 출력:%d\n",*pa);
    printf("변수 a 출력:%d\n",a);
}