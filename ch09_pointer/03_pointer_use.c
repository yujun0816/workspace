#include <stdio.h>

int main(){
    int a=10,b=15,total;
    double avg;
    int *pa,*pb;
    int *pt= &total;
    double *pg= &avg;

    //포인터 변수는 선언시에만 *를 붙이고 사용할때는 붙이지 않음
    pa=&a;
    pb=&b;

    *pt=*pa+*pb;  //total=a+b동일
    *pg=*pt;  //avg=total/2.0 동일
    printf("두 정수값:%d %d\n",a,b);
    printf("두 정수의 합: %d\n",*pt);
    printf("두 정수의 평균 %.1lf",*pg);
}