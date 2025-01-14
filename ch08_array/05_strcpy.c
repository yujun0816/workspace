#include <stdio.h>
#include <string.h>

int main(){
    char name1[4]="abc";
    char name2[4];
    strcpy(name2,name1);
    printf("%s",name2);
}