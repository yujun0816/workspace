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
    strcpy(s1.name,"최초롱");
    s1.age=37;
    s1.height=183.2;

    s1.intro=(char *)malloc(80);
    printf("자기소개");
    gets(s1.intro);

    printf("이름: %s\n",s1.name);
    printf("나이: %d\n",s1.age);
    printf("신장: %.1f\n",s1.height);
    printf("자기소개: %s\n",s1.intro);

    free(s1.intro);
}