#include <stdio.h>
/**
 * 변수: 하나의 값을 저장하는 메모리 공간
 * 메모리는 주소를 가지고 있음
 */
int main(){
    char a;
    int b;
    double c;

    //%u(unsigned) 기호제거 (양수)
    //%p(pointer) 16진수 표현
    printf("char형 변수의 주소:%u\n",&a);
    printf("int형 변수의 주소:%u\n",&b);
    printf("double형 변수의 주소:%u\n",&c);

}