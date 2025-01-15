#include <stdio.h>
/**
 * 포인터에서 const의미는?
 *  포인터 변수가 가르키는 변수를 간접참조연산자로 변환 불가
 */
int main(){
    int a=10,b=20;
    const int *pa=&a;  //pa->a

    printf("a: %d\n",*pa);
    pa=&b;  //pa->b
    printf("b: %d\n",*pa);
    pa=&a;
    a=80;
    printf("a: %d\n",*pa);
}