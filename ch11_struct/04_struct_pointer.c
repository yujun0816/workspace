#include <stdio.h>
#include <string.h>

struct profile{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(){
    struct profile s1;
    strcpy(s1.name,"���ʷ�");
    s1.age=37;
    s1.height=183.2;

    s1.intro=(char *)malloc(80);
    printf("�ڱ�Ұ�");
    gets(s1.intro);

    printf("�̸�: %s\n",s1.name);
    printf("����: %d\n",s1.age);
    printf("����: %.1f\n",s1.height);
    printf("�ڱ�Ұ�: %s\n",s1.intro);

    free(s1.intro);
}