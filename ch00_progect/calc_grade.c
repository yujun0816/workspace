#include <stdio.h>
/**
 * ���� ����
 * 3������ ����(0~100) �Է�
 * �迭�� ����
 * ������ ��� ���
 * ���
 */
int main(){
    char name[20];
    int score[3];
    int total=0;
    double ave=0;

    printf("�̸� : ");
    scanf("%s",&name);

    for(int i=0; i<3; i++){
        printf("����:");
        scanf("%d",&score[i]);
    }

    for(int i=0; i<3; i++){
        total+=score[i];
    }
    ave=total/3.0;

    printf("%s���� ������ %d, ����� %.2f�Դϴ�",name,total,ave);
}