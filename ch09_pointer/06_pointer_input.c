#include <stdio.h>
/**
 * 포인터 대입 규칙
 * 포인터는 가리키는 변수의 자료형이 같을때만 대입 가능
 * 형 변환을 사용한 포인터의 대입은 언제나 간ㅇ
 * ex)
 * doouble a=3.4;
 * double *pd=&a;
 * int *pi;
 * pi =(int *)pd  //int형 변수로 형 변환
 */
int main(){
    int a=10;
    int *p=&a;
    double *pd;
    pd=p;
    printf("%lf\n",*pd);
}