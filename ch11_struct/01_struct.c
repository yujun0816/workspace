#include <stdio.h>
/**
 * 구조체 변수 활용
 * main()함수 앞에 위치하면 전역으로 사용
 * 함수내에 선언하면 로컬로 사용
 * 
 * 구조체 변수의 크기
 * 모든 시스템은 테이터를 빠르게 읽고 쓰기 위해 일정한 크기 단위로 메모리 접근
 * 멤버 사이에 패딩 바이트를 사용해서 정렬
 */

struct student{
    int num;
    double grade;
};

int main(){
   struct student s1;
   
   s1.num=2;
   s1.grade=4.2;
   printf("%d\n",s1.num);
   printf("%.2f\n",s1.grade);
}