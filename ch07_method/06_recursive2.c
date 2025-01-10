#include <stdio.h>


void fruit(int count){
    printf("Apple");
    if(count==3)
        return;
    fruit(count+1);  //재귀함수
}

int main(){
    fruit(1);
}