#include <stdio.h>
/**
 * for문
 * 반복횟수를 아는 경우 사용 ex)게시글 목록
 * for문은 초기식 조건식 증강식으로 구성
 * i,j,k 변수
 * for문 내에서 i,j,k값을 수정 x
 */
int main(){
    for(int i=1; i<10; i++)
    printf("2x%d=%d\n",i,i*2);  
}