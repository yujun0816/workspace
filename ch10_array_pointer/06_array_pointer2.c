#include <stdio.h>

int main(){
    char *dessert="apple";  //포인터 변수 dessert에 'a'시작주소 저장

    printf("dinner is %s\n",dessert);
    dessert="banana";
    printf("tmr dinner is %s",dessert);

    //같은 문자열 상수를 여러번 사용할때
    //grape 문자열을 메모리에 저장하고 그 주소를 공유하도록 함
    //즉 여러번 사용해도 문자열은 1개만 저장됨
    char *pa="grape";
    char *pb="grape";
    char *pc="grape";
    
}