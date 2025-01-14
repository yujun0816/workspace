#include <stdio.h>
/**
 * 성적 계산기
 * 3과목의 성적(0~100) 입력
 * 배열에 저장
 * 총점과 평균 계산
 * 출력
 */
int main(){
    char name[20];
    int score[3];
    int total=0;
    double ave=0;

    printf("이름 : ");
    scanf("%s",&name);

    for(int i=0; i<3; i++){
        printf("정수:");
        scanf("%d",&score[i]);
    }

    for(int i=0; i<3; i++){
        total+=score[i];
    }
    ave=total/3.0;

    printf("%s님의 총점은 %d, 평균은 %.2f입니다",name,total,ave);
}