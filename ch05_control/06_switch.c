#include <stdio.h>

int main(){
    int rank=2,m=0;

    switch(rank){
        case 1:
            m=100;
            break;
        case 2:
            m=200;
            break;
        case 3:
            m=300;
            break;
        default:  //조건에 만족하는 case가 없는 경우 실행행
            m=999;
            break;  //스테이지 한거 빼는법 reset
    }
}