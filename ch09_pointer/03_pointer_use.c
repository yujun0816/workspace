#include <stdio.h>

int main(){
    int a=10,b=15,total;
    double avg;
    int *pa,*pb;
    int *pt= &total;
    double *pg= &avg;

    //������ ������ ����ÿ��� *�� ���̰� ����Ҷ��� ������ ����
    pa=&a;
    pb=&b;

    *pt=*pa+*pb;  //total=a+b����
    *pg=*pt;  //avg=total/2.0 ����
    printf("�� ������:%d %d\n",a,b);
    printf("�� ������ ��: %d\n",*pt);
    printf("�� ������ ��� %.1lf",*pg);
}