#include <stdio.h>
/**
 * 주소와 포인터
 * 주소는 상수
 * 포인터는 변수
 * 주소는 대입연산자 좌측항에 사용불가
 * 
 * 100='A'; (x)
 * *pa='A'; (o)
 * 
 * ex)
 *  int a,b;  //a주소 100번지 b주소 200번지
 *  int *p;
 *  p=&a; (o)
 *  p=&b; (o)
 *  a와b의 주소는 바뀌지 않음
 *  포인터 a와b는 어떤 주소를 대입하느냐에 따라 달라짐
 * &a=&b (x)
 * 
 * 두 포인터가 하나의 변수를 동시에 가리키는것 가능
 * int a;
 * int *pa,*pb;
 * pa=pb=&a;
 * *pa=10;
 * printf("%d",*pb);
 * 
 * 포인터의 크기는 저장할 주소에 크기에 따라 결정
 * 크기가 클 수록 넑은 범위의 메모리 사용 ㄱㄴ
 * 포인터의 크기는 컴파일러에 따라 다를수잇음
 * 모든 주소와 포인터는 가리키는 자료형과 상관없이 크기가 동일
 */
int main(){
    char ch;  //1byte
    int in;   //4byte
    double db;      //8byte
    char *pc=&ch;
    int *pi=&in;
    double *pd=&db;
    printf("char : %d\n",sizeof(&ch));
    printf("int : %d\n",sizeof(&in));
    printf("double : %d\n",sizeof(&db));

    printf("char * : %d\n",sizeof(*pc));
    printf("int * : %d\n",sizeof(*pi));
    printf("double * : %d\n",sizeof(*pd));
}