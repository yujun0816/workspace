#include <stdio.h>

/**
 * 실수 자료형
 * float(7),double(15),long double
 * 정수형은 int를 기본으로 사용,실수형은 꼭 필요한 경우에만 사용
 * 실수형은 double을 기본으로 사용
 * 실수형은 값의 범위보다 유효숫자의 개수가 중요하다
 */
int main(){
    float ft=1.23456789123456789;
    double dh=1.23456789123456789;

    printf("float형 변수값:%.20f\n",ft);
    printf("double형 변수값:%.20lf\n",ft);
}