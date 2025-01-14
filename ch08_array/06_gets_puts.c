#include <stdio.h>

int main(){
    char name[20];
    printf("이름 :");
    gets(name);  //빈칸을 포함하는 문자열 입력 가능
    puts("입력된 문자열: ");
    puts(name);  //문자열만 출력 가능
}