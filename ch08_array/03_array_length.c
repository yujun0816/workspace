#include <stdio.h>

/**
 * �迭 ���� ���
 * c���� sizeof()
 * 
 * c��� �̿� ��ü������ �ڹ� ���̽� ���
 * �迭�� ��ü�� ǥ��
 * �⺻������ �迭 �̸� length ->�迭 ����
 * 
 */
int main(){
    int score[5];
    //sizeof(score)  20byte
    //sizeof(score[0])  4byte

    int count=sizeof(score) /sizeof(score[0]);
    printf("�迭���� : %d",count);
}